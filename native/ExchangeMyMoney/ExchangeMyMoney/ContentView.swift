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
                        .background((self.selectedCurrency == item.strCurrency) ? Color("myRed") : Color("myBlack"))
                        .foregroundColor((self.selectedCurrency == item.strCurrency) ? Color("myBlack") : Color.white)
                        .cornerRadius(8)
                    }
                }
            }
        }
        .padding(.leading, 20.0)
        .padding(.trailing, 20.0)
    }
}

struct TriangleUpShape: Shape {
    func path(in rect: CGRect) -> Path {
        var path = Path()
        path.move(to: CGPoint(x: rect.width/2, y: rect.height/4))
        path.addLine(to: CGPoint(x: 3*rect.width/4, y: 3*rect.height/4))
        path.addLine(to: CGPoint(x: rect.width/4, y: 3*rect.height/4))
        path.addLine(to: CGPoint(x: rect.width/2, y: rect.height/4))
        return path
    }
    
    
}

struct TriangleDownShape: Shape {
    func path(in rect: CGRect) -> Path {
        var path = Path()
        path.move(to: CGPoint(x: 20.0, y: 0.0))
        path.addLine(to: CGPoint(x: rect.width-20.0, y: 0.0))
        path.addLine(to: CGPoint(x: rect.width/2, y: rect.height-20.0))
        path.addLine(to: CGPoint(x: 20.0, y: 0.0))
        return path
    }
    
    
}

struct ContentView: View {
    @ObservedObject var viewModel : ContentViewModel = ContentViewModel()
    @ObservedObject var keyboard = KeyboardResponder()
    @State var isColoredBlack : Bool = false
    var body: some View {
        GeometryReader { geometry in
        ScrollView(.vertical, showsIndicators: false) {
            VStack(alignment: .center, spacing: 24.0) {
                Text("Exchange My Money").font(.title)
                if (self.viewModel.isLoadingList) {
                    Text("Loading...")
                } else {
                    if (!self.viewModel.strListError.isEmpty) {
                        Text(self.viewModel.strListError)
                        .foregroundColor(Color("myRed"))
                        .font(.title)
                        .multilineTextAlignment(.center)
                    } else {
                        Text("Choose base currency").font(.subheadline)
                        CurrencySelectorView(arrCurrencies: self.$viewModel.arrCurrencies, selectedCurrency: self.$viewModel.strFromCurrency)
                        Text("Converting \(self.viewModel.strFromCurrency) to \(self.viewModel.strToCurrency)")
                            .fontWeight(.bold)
                            .foregroundColor(Color("myRed"))
                        Text("Choose target currency").font(.subheadline)
                        CurrencySelectorView(arrCurrencies: self.$viewModel.arrCurrencies, selectedCurrency: self.$viewModel.strToCurrency)
                    }
                }
                Text("How much you want to convert?")
                HStack(alignment: .center, spacing: 0.0) {
                    Spacer()
                    TextField("amount", text: self.$viewModel.amount) {
                        UIApplication.shared.endEditing()
                    }.multilineTextAlignment(TextAlignment.center).frame(width: 100.0)
                    .textFieldStyle(RoundedBorderTextFieldStyle())
                    .keyboardType(.decimalPad)
                    Text(self.viewModel.strFromCurrency).frame(width: 100.0).multilineTextAlignment(TextAlignment.leading)
                    Spacer()
                }
                Button(action: {
                    self.viewModel.convert()
                    withAnimation(.linear(duration: 0.6)) {
                        self.isColoredBlack = !self.isColoredBlack
                    }
                }) {
                    Text(self.viewModel.isLoadingConversion ? "Converting..." : "Convert")
                    .foregroundColor(Color.white)
                        .multilineTextAlignment(.center).padding().frame(width: 200.0, height: 44.0)
                    .background(Color("myBlack"))
                    .cornerRadius(8)
                }.disabled(self.viewModel.strFromCurrency.isEmpty || self.viewModel.isLoadingConversion)
                if (!self.viewModel.result.isEmpty) {
                    Text("Conversion result")
                    Text(self.viewModel.result)
                    
                } else {
                    Text("Enter amount to convert")
                }
                if (!self.viewModel.strConversionError.isEmpty) {
                    Text(self.viewModel.strConversionError)
                        .fixedSize(horizontal: false, vertical: true)
                        .foregroundColor(Color("myRed"))
                        .font(.title)
                        .multilineTextAlignment(.center)
                }
                ZStack {
                    TriangleDownShape()
                        .fill(self.isColoredBlack ? Color("myBlack") : Color("myRed"))
                        .frame(width: geometry.size.width, height: geometry.size.width/2, alignment: .center)
                    TriangleUpShape()
                        .fill(self.isColoredBlack ? Color("myRed") : Color("myBlack"))
                        .frame(width: geometry.size.width, height: geometry.size.width/2, alignment: .center)
                }
            }.onTapGesture {
                UIApplication.shared.endEditing()
            }
        }.padding(.bottom, self.keyboard.currentHeight - 20.0).padding(.top, 20.0).padding(.leading, 20.0).padding(.trailing, 20.0)
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
