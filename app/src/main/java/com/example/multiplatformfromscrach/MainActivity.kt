package com.example.multiplatformfromscrach

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import com.example.multiplatformfromscrach.viemodel.CurrenciesViewModel
import com.example.sharedmodule.convertRate
import com.example.sharedmodule.createApplicationScreenMessage
import com.example.sharedmodule.getConversionsList
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.util.ArrayList

class MainActivity : AppCompatActivity() {

    private lateinit var currenciesViewModel : CurrenciesViewModel

    var number = 5.34423
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        initViewModel()
        setObservers()

        tvTitle.text = createApplicationScreenMessage()

       /* getConversionsList {
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
        }*/
    }

    private fun initViewModel() {
        currenciesViewModel  = ViewModelProvider(this).get(CurrenciesViewModel::class.java)
    }

    private fun setObservers() {
        currenciesViewModel.let {
            it.conversionsList.observe(this, Observer { list ->
                updateView(list)
            })
        }
    }

    private fun updateView(list: ArrayList<String>?) {
        tvTitle.text = list?.size.toString()
    }


}
