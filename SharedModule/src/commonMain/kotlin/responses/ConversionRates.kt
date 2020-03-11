package com.example.sharedmodule.responses

import com.example.sharedmodule.model.ErrorException
import kotlinx.serialization.Serializable

@Serializable
data class ConversionRates(
    var error: ErrorException? = null,
    val date: String? = null,
    val rates: HashMap<String, String>? = null,
    val base: String? = null,
    var currenciesList: ArrayList<String> = arrayListOf()
) {
    fun createRatesList() {
        rates?.forEach {
            currenciesList.add(it.key)
        }
    }
}
