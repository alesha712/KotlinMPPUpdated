package com.example.multiplatformfromscrach

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.constraintlayout.widget.ConstraintLayout
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.multiplatformfromscrach.adapter.ConversionRecyclerAdapter
import com.example.multiplatformfromscrach.model.ConversionsDataModel
import com.example.multiplatformfromscrach.viemodel.CurrenciesViewModel
import com.google.android.material.chip.Chip
import kotlinx.android.synthetic.main.activity_main.*
import kotlin.collections.ArrayList

class MainActivity : AppCompatActivity() {
    companion object{
        val CONVERT_FROM = "convertFrom"
        val CONVERT_TO = "convertTo"
    }
    private lateinit var currenciesViewModel : CurrenciesViewModel
    private lateinit var conversionRecyclerAdapter: ConversionRecyclerAdapter
    private lateinit var layoutManagerFrom: LinearLayoutManager

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        initViewModel()
        setObservers()
    }

    private fun initViewModel() {
        currenciesViewModel  = ViewModelProvider(this).get(CurrenciesViewModel::class.java)
    }

    private fun setObservers() {
        currenciesViewModel.let {
            it.conversionsList.observe(this, Observer { list ->
                initRecyclerView(list)
                //updateView(list)
            })
        }
    }

    private fun initRecyclerView(currenciesList: ArrayList<ConversionsDataModel>) {
        if(recCurrencyListFrom.adapter == null){
            conversionRecyclerAdapter = ConversionRecyclerAdapter()
            layoutManagerFrom = LinearLayoutManager(this, LinearLayoutManager.HORIZONTAL, false)
            recCurrencyListFrom.layoutManager = layoutManagerFrom
            recCurrencyListFrom.adapter = conversionRecyclerAdapter
            conversionRecyclerAdapter.setData(currenciesList, CONVERT_FROM)
        }

        if(recCurrencyListTo.adapter == null){
            conversionRecyclerAdapter = ConversionRecyclerAdapter()
            val layoutManager = LinearLayoutManager(this, LinearLayoutManager.HORIZONTAL, false)
            recCurrencyListTo.layoutManager = layoutManager
            recCurrencyListTo.adapter = conversionRecyclerAdapter
            conversionRecyclerAdapter.setData(currenciesList, CONVERT_TO)
        }
    }

    private val itemClickCallback = fun (isChecked: Boolean, position : Int){
        for (num in 0..layoutManagerFrom.childCount){
            val itemView : ConstraintLayout? = layoutManagerFrom.findViewByPosition(position) as ConstraintLayout
            val chip = itemView?.findViewById<Chip>(R.id.chipCurrency)

            if(num == position){
                chip?.isChecked = true
                Log.d("alex", "set chip checked")
            }

            chip?.isChecked = false
            Log.d("alex", "set chip Un-checked")
        }
        layoutManagerFrom.findViewByPosition(position)
    }

    private fun updateView(list: ArrayList<String>?) {
        tvTitle.text = list?.size.toString()
    }


}
