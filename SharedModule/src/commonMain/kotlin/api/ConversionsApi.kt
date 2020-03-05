package com.example.sharedmodule.api

import io.ktor.http.Url

class ConversionsApi {

    val baseUrl = Url("https://api.exchangeratesapi.io/latest")

    val exchangeRate = Url("https://api.exchangeratesapi.io/latest?")
}