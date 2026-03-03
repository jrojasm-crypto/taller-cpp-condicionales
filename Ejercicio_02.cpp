#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Ingresa el primer lado: \n";
    std::cin >> a;
    std::cout << "Ingresa el segundo lado: \n";
    std::cin >> b;
    std::cout << "Ingresa el tercer lado: \n";
    std::cin >> c;


    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "Debes ingresar lados positvos\n"; //para que todos los lados sean positivos//
    }
    
    else if (a + b > c && a + c > b && b + c > a) {

        std::cout << "Es un triangulo valido" <<"\n";

        if (a == b && b == c) {
            std::cout << "Es un triangulo equilatero" <<"\n";
        }
        else if (a == b || a == c || b == c) {
            std::cout << "Es un triangulo isosceles" <<"\n";
        }
        else {
            std::cout << "Es un triangulo escaleno" <<"\n";
        }
                
        double mayor = a;

        if (b > mayor) {
            mayor = b;
        }
        if (c > mayor) {
            mayor = c;
        }

        //teorema de pitagoras para definir//

        if (pow(mayor, 2) == pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(mayor, 2)) {
            std::cout << "Es un triangulo rectangulo" << "\n";
        }
        else if (pow(mayor, 2) < pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(mayor, 2)) {
            std::cout << " Es un triangulo acutangulo" <<"\n";
        }
        else {
            std::cout << "Es un triangulo obtusangulo" <<"\n";
        }

    }
    else {
        std::cout << "No es un triangulo valido, ingresa valores diferentes" <<"\n" ;
    }

    return 0;
}
