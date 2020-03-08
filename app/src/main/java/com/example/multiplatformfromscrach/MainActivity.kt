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

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        tvTitle.text = createApplicationScreenMessage()

        CoroutineScope(Dispatchers.Main).launch {
            getConversionsList {
                    try {
                        tvTitle.text = it.error?.message ?: "ERROR"
                    } catch (e: Exception) {
                        Log.d("alex", e.message)
                    }

            }
        }
    }
}
