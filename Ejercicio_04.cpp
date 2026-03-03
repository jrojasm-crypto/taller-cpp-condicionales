#include <iostream>
#include <cmath>  
//cmath se usa para el fmod()//

int main() {
    double a, b, resultado;
    char operador;

    std::cout << "Ingresa el primer numero: \n";
    std::cin >> a;

    std::cout << "Ingresa el operador (+, -, *, /, %): \n";
    std::cin >> operador;

    std::cout << "Ingresa el segundo numero: \n";
    std::cin >> b;

    switch (operador) {

        case '+':
            resultado = a + b;
            std::cout << "Resultado: \n" << resultado << "\n";
            break;

        case '-':
            resultado = a - b;
            std::cout << "Resultado: \n" << resultado << "\n";
            break;

        case '*':
            resultado = a * b;
            std::cout << "Resultado: \n" << resultado << "\n";
            break;

        case '/':
            if (b == 0) {
                std::cout << "No se puede dividir entre cero \n";
            } else {
                resultado = a / b;
                std::cout << "Resultado: \n" << resultado <<"\n";
            }
            break;

        case '%':
            if (b == 0) {
                std::cout << "No se puede calcular el modulo cero \n";
            } else {
                resultado = fmod(a, b);
                std::cout << "Resultado: " << resultado <<"\n";
            }
            break;

        default:
            std::cout << "Operador invalido \n";
    }

    return 0;
}
