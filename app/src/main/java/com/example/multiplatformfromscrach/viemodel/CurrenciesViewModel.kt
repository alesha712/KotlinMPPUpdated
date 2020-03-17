package com.example.multiplatformfromscrach.viemodel

import android.util.Log
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.multiplatformfromscrach.model.ConversionsDataModel
import com.example.sharedmodule.getConversionsList
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class CurrenciesViewModel: ViewModel() {

    var conversionsList : MutableLiveData<ArrayList<ConversionsDataModel>>  = MutableLiveData()
    var conversionsError : MutableLiveData<String>  = MutableLiveData()

    init {
        getConversionsList()
    }

    private fun getConversionsList() {
        if(conversionsList.value.isNullOrEmpty()){
            conversionsList.value = arrayListOf()
        }

        getConversionsList {
            CoroutineScope(Dispatchers.Main).launch {
                try {
                    if (!it.currenciesList.isNullOrEmpty()){
                        for (currecncy in it.currenciesList){
                            conversionsList.value!!.add(ConversionsDataModel(currecncy))
                        }
                    }else {
                        conversionsError.value = "error"
                    }
                } catch (e: Exception) {
                    conversionsError.value = e.message ?: "error"
                }
            }
        }
    }
}