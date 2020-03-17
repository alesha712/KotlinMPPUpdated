package com.example.multiplatformfromscrach.adapter

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.example.multiplatformfromscrach.MainActivity
import com.example.multiplatformfromscrach.R
import com.example.multiplatformfromscrach.model.ConversionsDataModel
import com.google.android.material.chip.Chip

class ConversionRecyclerAdapter :
    RecyclerView.Adapter<ConversionRecyclerAdapter.ConversionViewHolder>() {

    private var currenciesList: ArrayList<ConversionsDataModel>? = null
    private var convertType : String = ""

    override fun onCreateViewHolder(
        parent: ViewGroup,
        viewType: Int
    ): ConversionRecyclerAdapter.ConversionViewHolder {
        return ConversionViewHolder(
            LayoutInflater.from(parent.context).inflate(
                R.layout.single_currency,
                parent,
                false
            )
        )
    }

    override fun getItemCount(): Int {
        return currenciesList?.size ?: 0
    }

    override fun onBindViewHolder(
        holder: ConversionRecyclerAdapter.ConversionViewHolder,
        position: Int
    ) {
        holder.bindData(currenciesList!![position], position)
    }

    fun setData(list: ArrayList<ConversionsDataModel>, convertType: String) {
        this.convertType = convertType
        this.currenciesList = list
        notifyDataSetChanged()
    }

    inner class ConversionViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {

        private var chipCurrency = itemView.findViewById<Chip>(R.id.chipCurrency)
//        private var layCurrency = itemView.findViewById<MaterialCardView>(R.id.laySingleCurrency)

        fun bindData(singleItem: ConversionsDataModel, position: Int) {


            currenciesList!!.forEach {

            }



            chipCurrency.let {
                it.text = singleItem.currency
                it.setOnCheckedChangeListener { view, isChecked ->
                    if(convertType == MainActivity.CONVERT_TO){

                    }else if(convertType == MainActivity.CONVERT_FROM){

                    }
                }
            }

        }
    }

}