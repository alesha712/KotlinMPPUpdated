package com.example.sharedmodule

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

actual fun platformName(): String {
    return "Android"
}

internal actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Default

actual fun makeLog(text: String) {
    println("Api: $text" )
}