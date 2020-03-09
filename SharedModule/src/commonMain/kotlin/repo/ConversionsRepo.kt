package com.example.sharedmodule.repo

import com.example.sharedmodule.ApplicationDispatcher
import com.example.sharedmodule.api.ConversionsApi
import com.example.sharedmodule.cache.CacheManager
import com.example.sharedmodule.makeLog
import com.example.sharedmodule.model.ConversionsModel
import com.example.sharedmodule.model.ConvertedResultModel
import com.example.sharedmodule.responses.ConversionRates
import com.example.sharedmodule.utils.*
import io.ktor.client.HttpClient
import io.ktor.client.features.ResponseException
import io.ktor.client.request.get
import io.ktor.client.request.parameter
import io.ktor.http.HttpStatusCode
import io.ktor.http.cio.ParserException
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.launch
import kotlinx.serialization.json.Json

class ConversionsRepo {

    private val client = HttpClient()
    private val api: ConversionsApi = ConversionsApi()

    fun getConversionRates(callBack: (ConversionsModel) -> Unit) {
        //This is the model that will be returned to the client
        CoroutineScope(ApplicationDispatcher).launch {
            val conversions = ConversionsModel()
            if (CacheManager.isRatesListAvailable()) {
                conversions.currenciesList = CacheManager.currenciesList
                callBack(conversions)
            } else {
                try {
                    val json = client.get<String>(api.baseUrl) {
                        makeLog("$SERVER_LOG_SENDING_REQUEST : $SERVER_METHOD --> ${this.method.value} ${this.url.protocol.name}://${this.url.host}${this.url.encodedPath}")
                    }
                    makeLog("$SERVER_LOG_RESPONSE : ${api.baseUrl} ---> ${HttpStatusCode.OK.value} === $json")
                    val conversionJsonObj = Json.nonstrict.parse(ConversionRates.serializer(), json)
                    conversions.createRatesList(conversionJsonObj.rates)

                    CacheManager.saveBaseJsonAndRatedDictionary(json, conversions.currenciesList)
                    callBack(conversions)
                } catch (e: ResponseException) {
                    conversions.setError(e.response.status.value.toString(), BASE_RESPONSE_ERROR)
                    makeLog(e.response.status.description)
                    callBack(conversions)
                } catch (e: Throwable) {
                    conversions.setError(UNKNOWN_ERROR_CODE, BASE_RESPONSE_ERROR)
                    makeLog(e.message ?: UNKNOWN_ERROR_MESSAGE)
                    callBack(conversions)
                } catch (e: Exception) {
                    conversions.setError(UNKNOWN_ERROR_CODE, BASE_RESPONSE_ERROR)
                    makeLog(e.message ?: UNKNOWN_ERROR_MESSAGE)
                    callBack(conversions)
                }
            }
        }
    }

    private suspend fun getExchangeRate(base: String, value: String, callBack: (String) -> Unit) {
        CoroutineScope(ApplicationDispatcher).launch {
            if (CacheManager.isExchangeRateAvailable(base, value)) {
                makeLog("$CACHE_DATA  ${CacheManager.getSpecificExchangeRate(base, value)}")
                callBack(CacheManager.getSpecificExchangeRate(base, value))
            } else {
                makeLog(API_DATA)
                try {
                    var apiText = ""
                    val json = client.get<String>(api.exchangeRate) {
                        parameter(EXCHANGE_BASE, base)
                        parameter(EXCHANGE_SYMBOLS, value)
                        apiText =
                            "${this.method.value} ${this.url.protocol.name}://${this.url.host}${this.url.encodedPath}?$EXCHANGE_BASE=$base&$EXCHANGE_SYMBOLS=$value"
                        makeLog("$SERVER_LOG_SENDING_REQUEST : $SERVER_METHOD --> $apiText")
                    }
                    val conversionJsonObj = Json.nonstrict.parse(ConversionRates.serializer(), json)
                    makeLog("$SERVER_LOG_RESPONSE : $apiText ---> ${HttpStatusCode.OK.value} === $json")
                    CacheManager.addRateToHash(
                        base,
                        value,
                        conversionJsonObj.rates?.get(value) ?: ""
                    )

                    callBack(conversionJsonObj.rates?.get(value) ?: "0")
                } catch (e: ResponseException) {
                    val url = e.message?.substringAfter("")
                    val a = url?.substringBefore(")")
                    makeLog("$SERVER_LOG_RESPONSE $a ----> ${e.response.status.value} : ${e.response.status.description}")
                    callBack("0")
                } catch (e: Throwable) {
                    makeLog(e.message ?: UNKNOWN_ERROR_MESSAGE)
                    callBack("0")
                } catch (e: Exception) {
                    makeLog(e.message ?: UNKNOWN_ERROR_MESSAGE)
                    callBack("0")
                }
            }
        }
    }

    suspend fun convertRates(
        base: String,
        convertTo: String,
        amount: String,
        callBack: (ConvertedResultModel) -> Unit
    ) {
        var exchangeRate: String
        getExchangeRate(base, convertTo) {
            exchangeRate = it

            var doubleAmount = 0.0
            var doubleExchangeRate = 0.0

            val convertedModel = ConvertedResultModel()
            try {
                doubleAmount = amount.toDouble()
                doubleExchangeRate = exchangeRate.toDouble()
            } catch (e: ParserException) {
                makeLog(e.message ?: PARSING_EXCEPTION)
                convertedModel.setError(UNKNOWN_ERROR_CODE, e.message ?: PARSING_EXCEPTION)
            } catch (e: Exception) {
                makeLog(e.message ?: PARSING_EXCEPTION)
                convertedModel.setError(UNKNOWN_ERROR_CODE, e.message ?: PARSING_EXCEPTION)
            }

            val exchangedAmount = convertRatesWithAmount(doubleExchangeRate, doubleAmount)

            convertedModel.result = exchangedAmount

            callBack(convertedModel)
        }
    }
}