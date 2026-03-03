#include <iostream>
#include <iomanip>
//para que el resultado se muestre con 2 decimales con setprecision//

double celsius, farenheit, kelvin, rankine;

int main () {

    std::cout << "--------------------------------------------------------\n";
    std::cout << "Ingresa la temperatura en grados celsius:\n";
    std::cin >> celsius;


    //conversión en celsius//
    farenheit = ((celsius * 1.8) + 32);
    kelvin = (celsius + 273.15);
    rankine = ((1.8 * celsius) + 491.67);


    //resultado con 2 decimales//
    std::cout << std::fixed << std::setprecision(2);
    
    //resultados//
    std::cout<<"Resultado en grados Farenheit: "<<farenheit<<" Farenheit \n";
    std::cout<<"Resultado en grados Kelvin: "<<kelvin<<" Kelvin \n";
    std::cout<<"Resultado en grados Rankine: "<<rankine<<" Rankine \n";

    std::cout << "--------------------------------------------------------\n";
        return 0;
}
