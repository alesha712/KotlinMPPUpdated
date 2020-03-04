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
    var body: some View {
        Text(CommonKt.createApplicationScreenMessage())
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
