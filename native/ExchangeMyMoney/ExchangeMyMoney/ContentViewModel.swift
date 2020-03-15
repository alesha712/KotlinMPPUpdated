//
//  ContentViewModel.swift
//  SwiftUIExampleProject
//
//  Created by Arie Peretz on 21/12/2019.
//  Copyright © 2019 Arie Peretz. All rights reserved.
//

import Foundation
import Combine
import UIKit
import SwiftUI
import SharedModule

class Currency : Identifiable, ObservableObject {
    var id = UUID()
    @Published var strCurrency : String
    
    init(strCurrency : String) {
        self.strCurrency = strCurrency
    }
}

class ContentViewModel : ObservableObject {
    var conversionsModel : ConversionsModel?

    @Published var strFromCurrency : String = "" // source currency
    @Published var strToCurrency : String = "" // target currency
    @Published var amount : String = "0.00" // amount to convert
    @Published var result : String = ""
    @Published var arrCurrencies : [Currency] = []
    @Published var isLoading : Bool = true
    @Published var strListError : String = ""
    @Published var strConversionError : String = ""
    
    init() {
        DispatchQueue.main.asyncAfter(deadline: .now() + 5.0) {
            self.fetchCurrenciesList()
        }
    }
    
    func fetchCurrenciesList() {
        CommonKt.getConversionsList { (conversionsModel) in
            self.conversionsModel = conversionsModel
            if let model = self.conversionsModel {
                print(model)
                if let error = model.error {
                    print(error)
                    self.strListError = error.message
                    self.isLoading = false
                } else if let arrCurrencies = model.currenciesList as? [NSString] {
                    self.arrCurrencies.removeAll(keepingCapacity: false)
                    for index in 0..<arrCurrencies.count {
                        let currency = String(arrCurrencies[index])
                        if (currency == self.strFromCurrency) {
                            self.arrCurrencies.insert(Currency(strCurrency: currency), at: 0)
                        } else {
                            self.arrCurrencies.append(Currency(strCurrency: currency))
                        }
                    }
                    self.strFromCurrency = self.arrCurrencies.first?.strCurrency ?? ""
                    self.strToCurrency = self.arrCurrencies.first?.strCurrency ?? ""
                    self.isLoading = false
                }
            }
        }
    }
    
    func convert() {
        CommonKt.convertRate(base: self.strFromCurrency, convertTo: self.strToCurrency, amount: self.amount) { (convertedResultModel) in
            if let error = convertedResultModel.error {
                self.strConversionError = error.message
            }
            if let result = convertedResultModel.result {
                self.result = result + " " + self.strToCurrency
            }
        }
    }
}
