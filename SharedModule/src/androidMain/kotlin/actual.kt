package com.example.sharedmodule

import com.example.sharedmodule.utils.MPP_LOG_TAG
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

actual fun platformName(): String {
    return "Android"
}

internal actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Default

actual fun makeLog(text: String) {
    println("$MPP_LOG_TAG: $text")
}

fun Double.formatNumber(digits: Int) : String {
    return "%.${digits}f".format(this)
}