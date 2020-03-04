package com.example.sharedmodule

expect fun platformName(): String

fun createApplicationScreenMessage(): String {
    return "Hello World, From ${platformName()}"
}
