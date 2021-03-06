package com.example.sharedmodule

import com.example.sharedmodule.utils.MPP_LOG_TAG
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Runnable
import platform.UIKit.UIDevice
import platform.darwin.dispatch_async
import platform.darwin.dispatch_get_main_queue
import platform.darwin.dispatch_queue_t
import kotlin.coroutines.CoroutineContext

actual fun platformName(): String {
    return UIDevice.currentDevice.systemName() + " *** " +
            UIDevice.currentDevice.systemVersion
}

internal actual val ApplicationDispatcher: CoroutineDispatcher = NsQueueDispatcher(
    dispatch_get_main_queue()
)

internal class NsQueueDispatcher(
    private val dispatchQueue: dispatch_queue_t

) : CoroutineDispatcher() {

    override fun dispatch(context: CoroutineContext, block: Runnable) {
        dispatch_async(dispatchQueue) {
            block.run()
        }
    }
}

actual fun makeLog(text: String) {
    println("$MPP_LOG_TAG: $text")
}