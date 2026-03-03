#include <iostream>
#include <algorithm> 
//para usar min()//

using namespace std;

int main() {

    double compra, descuentoTotal = 0.0;
    char cliente;
    int cupon;
    bool finDeSemana;

  
    cout << "--- Sistema de Tienda ---" << "\n";
    cout << "Monto de la compra: ";
    cin >> compra;
    cout << "Tipo de cliente (V para VIP, N para Normal): \n";
    cin >> cliente;
    cout << "Codigo de cupon (1 o 2, otro para ninguno): \n";
    cin >> cupon;
    cout << "Es fin de semana? (1 para SI, 0 para NO): \n";
    cin >> finDeSemana;

 
    if (cliente == 'V' || cliente == 'v') {
        descuentoTotal += 0.10; 
    }

   
    if (compra > 100) {
        if (compra > 500) {
            descuentoTotal += 0.15; 
        } else {
            descuentoTotal += 0.05; 
        }
    }

  //descuento//
    switch (cupon) {
        case 1:
            descuentoTotal += 0.05;
            break;
        case 2:
            descuentoTotal += 0.10;
            break;
        default:
            descuentoTotal += 0.0;
    }

   
    if (finDeSemana) {
        descuentoTotal += 0.05;
    }

    descuentoTotal = min(descuentoTotal, 0.50);

    double descuento = compra * descuentoTotal;
    double precio = compra - descuento;

    cout << "\n--- Resumen de Compra ---" << "\n";
    cout << "Descuento aplicado: " << (descuentoTotal * 100) << "%" << "\n";
    cout << "Total a pagar: $" << precio << "\n";

    return 0;
}
