//
//  Utils.swift
//  SwiftUIExampleProject
//
//  Created by Arie Peretz on 23/12/2019.
//  Copyright © 2019 Arie Peretz. All rights reserved.
//

import UIKit

extension UIApplication {
    func endEditing() {
        sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
    }
}
