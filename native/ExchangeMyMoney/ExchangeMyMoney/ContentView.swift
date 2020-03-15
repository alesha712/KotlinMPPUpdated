//
//  ContentView.swift
//  ExchangeMyMoney
//
//  Created by Arie Peretz on 11/02/2020.
//  Copyright © 2020 Arie Peretz. All rights reserved.
//

import SwiftUI
import Combine

protocol KeyboardResponderProtocol {
    var currentHeight: CGFloat { get }
    var duration: TimeInterval { get }
}

final class KeyboardResponder: KeyboardResponderProtocol, ObservableObject {
    @Published private(set) var currentHeight: CGFloat = 0
    private(set) var duration: TimeInterval = 0.3
    private var cancellableBag = Set<AnyCancellable>()

    init() {
        let keyboardWillShow = NotificationCenter.default.publisher(for: UIResponder.keyboardWillShowNotification)
        let keyboardWillHide = NotificationCenter.default.publisher(for: UIResponder.keyboardWillHideNotification)
        _ = Publishers.Merge(keyboardWillShow, keyboardWillHide)
            .receive(on: RunLoop.main)
            .sink { [weak self] in self?.keyboardNotification($0) }
            .store(in: &cancellableBag)
    }
    
    private func keyboardNotification(_ notification: Notification) {
        let isShowing = notification.name == UIResponder.keyboardWillShowNotification
        if let userInfo = notification.userInfo {
            duration = (userInfo[UIResponder.keyboardAnimationDurationUserInfoKey] as? NSNumber)?.doubleValue ?? 0.0
            let endFrame = (notification.userInfo?[UIResponder.keyboardFrameEndUserInfoKey] as? NSValue)?.cgRectValue
            if isShowing {
                currentHeight = endFrame?.height ?? 0.0
            } else {
                currentHeight = 0.0
            }
        }
    }
}

struct CurrencySelectorView: View {
    @Binding var arrCurrencies : [Currency]
    @Binding var selectedCurrency : String
    
    var body: some View {
        ScrollView(.horizontal, showsIndicators: false) {
            HStack(alignment: .center, spacing: 4.0) {
                ForEach(arrCurrencies, id: \.id) { item in
                    Button(action: {
                        self.selectedCurrency = item.strCurrency
                    }) {
                    Text(item.strCurrency)
                        .frame(width: 66.0, height: 44.0)
                        .background((self.selectedCurrency == item.strCurrency) ? Color.red : Color.black)
                        .foregroundColor((self.selectedCurrency == item.strCurrency) ? Color.black : Color.white)
                        .cornerRadius(8)
                    }
                }
            }
        }
    }
}



struct ContentView: View {
    @ObservedObject var viewModel : ContentViewModel = ContentViewModel()
    @ObservedObject var keyboard = KeyboardResponder()

    var body: some View {
        ScrollView(.vertical, showsIndicators: false) {
            VStack(alignment: .center, spacing: 24.0) {
                Text("Exchange My Money").font(.title)
                if (viewModel.isLoading) {
                    Text("Loading...")
                } else {
                    if (!viewModel.strConversionError.isEmpty) {
                        Text(viewModel.strListError)
                        .foregroundColor(Color.red)
                        .font(.title)
                        .multilineTextAlignment(.center)
                    } else {
                        Text("Choose base currency").font(.subheadline)
                        CurrencySelectorView(arrCurrencies: $viewModel.arrCurrencies, selectedCurrency: $viewModel.strFromCurrency)
                        Text("Converting \(viewModel.strFromCurrency) to \(viewModel.strToCurrency)")
                            .fontWeight(.bold)
                            .foregroundColor(Color.red)
                        Text("Choose target currency").font(.subheadline)
                        CurrencySelectorView(arrCurrencies: $viewModel.arrCurrencies, selectedCurrency: $viewModel.strToCurrency)
                    }
                }
                Text("How much you want to convert?")
                HStack(alignment: .center, spacing: 0.0) {
                    Spacer()
                    TextField("amount", text: $viewModel.amount) {
                                       UIApplication.shared.endEditing()
                    }.multilineTextAlignment(TextAlignment.center).frame(width: 100.0)
                    .textFieldStyle(RoundedBorderTextFieldStyle())
                    Text(viewModel.strFromCurrency).frame(width: 100.0).multilineTextAlignment(TextAlignment.leading)
                    Spacer()
                }
                Button(action: {
                    self.viewModel.convert()
                }) {
                    Text("Convert")
                    .foregroundColor(Color.white)
                    .multilineTextAlignment(.center).padding().frame(width: 135.0, height: 44.0)
                    .background(Color.black)
                    .cornerRadius(8)
                }.disabled(viewModel.strFromCurrency.isEmpty)
                if (!viewModel.result.isEmpty) {
                    Text("Conversion result")
                    Text(viewModel.result)
                    
                } else {
                    Text("Enter amount to convert")
                }
                if (!viewModel.strConversionError.isEmpty) {
                    Text(viewModel.strConversionError)
                        .foregroundColor(Color.red)
                        .font(.title)
                        .multilineTextAlignment(.center)
                }
            }.onTapGesture {
                UIApplication.shared.endEditing()
            }
        }.padding(.bottom, keyboard.currentHeight - 20.0).padding(.top, 100.0).padding(.leading, 20.0).padding(.trailing, 20.0)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
