package com.example.sharedmodule.utils

fun convertRatesWithAmount(exchangeRate: Double, amount: Double): String {
    return (amount * exchangeRate).toString()
}