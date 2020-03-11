//
//  ContentView.swift
//  KotlinIosFromScratch
//
//  Created by Nathan Harary on 04/03/2020.
//  Copyright © 2020 alx. All rights reserved.
//

import SwiftUI
import SharedModule

struct ContentView: View {
    @State var viewModel : ConversionViemModel = ConversionViemModel()
    
    
    
    var body: some View {
        VStack(alignment: .center, spacing: 8.0) {
            Text(CommonKt.createApplicationScreenMessage())
            Text("\(viewModel.model?.currenciesList.count ?? 00000)")
        }
        
    }
    
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}

class ConversionViemModel {
    var model : ConversionsModel?
    var amount : String?
    
    init() {
         CommonKt.getConversionsList { (result) in
            DispatchQueue.main.async {
                            self.model = result
            }
        }
        CommonKt.convertRate(base: "USD", convertTo: "ILS", amount: "123123") { (result) in
            DispatchQueue.main.async {
                self.amount = result.result
                print(self.amount ?? "default value")
            }
        }
    }
}


