#include <iostream>
#include <string>


int main() {
    double nota;
    std::string letra;
    std::string calificacion;

    std::cout << "Ingrese la nota del estudiante (0 - 100): ";
    std::cin >> nota;

    if (nota < 0 || nota > 100) {
        std::cout << "Error: Nota invalida." << "\n";
    }
    else {
        if (nota >= 90) {
            letra = "A";
        }
        else if (nota >= 80) {
            letra = "B";
        }
        else if (nota >= 70) {
            letra = "C";
        }
        else if (nota >= 60) {
            letra = "D";
        }
        else {
            letra = "F";
        }

        //calificaion//
        if (nota >= 75) {
            calificacion = "Aprobado";
        }
        else {
            calificacion = "Reprobado";
        }

        std::cout << "Letra: " << letra << "\n";
        std::cout << "Estado: " << calificacion << "\n";
    }

    return 0;
}
