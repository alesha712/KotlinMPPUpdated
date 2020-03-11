package com.example.sharedmodule.utils

fun convertRatesWithAmount(exchangeRate: Double, amount: Double): String {
    return (amount * exchangeRate).formatNumber(2)
}

//This extension function returns a double formatted as a string with commas separators and decimalDigits by request
fun Double.formatNumber(digits: Int): String {
    if (this > MAX_AMOUNT) {
        return this.toString()
    }

    val data = this.toString()

    val digitsBeforeDecimalPoint = data.substringBefore(".")
    val digitsAfterDecimalPoint = data.substringAfter(".")

    val resultAfterDecimalPoint = digitsAfterDecimalPoint.take(digits)
    var resultBeforeDecimalPoint = ""

    var count = 0
    for (index in digitsBeforeDecimalPoint.lastIndex downTo 0) {
        count++
        resultBeforeDecimalPoint = if (count % 3 == 0 && index != 0) {
            "," + digitsBeforeDecimalPoint[index] + resultBeforeDecimalPoint
        } else {
            digitsBeforeDecimalPoint[index] + resultBeforeDecimalPoint
        }
    }

    return "${resultBeforeDecimalPoint}.${resultAfterDecimalPoint}"
}