package com.example.sharedmodule

import com.example.sharedmodule.model.ConversionsModel
import com.example.sharedmodule.model.ConvertedResultModel
import com.example.sharedmodule.repo.ConversionsRepo
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.launch

expect fun platformName(): String

fun createApplicationScreenMessage() : String {
    return "Hello World, from ${platformName()}"
}

internal expect val ApplicationDispatcher: CoroutineDispatcher

expect fun makeLog(text: String)

fun getConversionsList(callBack: (ConversionsModel) -> Unit) {
    ConversionsRepo().getConversionRates(callBack)
}

fun convertRate(base: String,
                convertTo: String,
                amount: String,
                callBack: (ConvertedResultModel) -> Unit){

    CoroutineScope(ApplicationDispatcher).launch {
        ConversionsRepo().convertRates(base, convertTo, amount, callBack)
    }
}
