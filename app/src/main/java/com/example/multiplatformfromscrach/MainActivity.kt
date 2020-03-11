package com.example.multiplatformfromscrach

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.example.sharedmodule.convertRate
import com.example.sharedmodule.createApplicationScreenMessage
import com.example.sharedmodule.getConversionsList
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    var number = 5.34423
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        tvTitle.text = createApplicationScreenMessage()

        getConversionsList {
            CoroutineScope(Dispatchers.Main).launch {
                try {
                    tvTitle.text = it.currenciesList.size.toString()
                } catch (e: Exception) {
                    Log.d("alex", e.message ?: "error")
                }
            }
        }

        tvTitle.setOnClickListener {
            convertRate("USD", "ILS", number.toString()) {
                CoroutineScope(Dispatchers.Main).launch {
                    try {
                        tvTitle.text = it.result ?: "couldnt get result"
                        number += 100000
                    } catch (e: Exception) {
                        Log.d("alex", e.message ?: "error")
                    }
                }
            }
        }
    }
}
