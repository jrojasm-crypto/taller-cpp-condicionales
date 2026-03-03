#include <iostream>

using namespace std;

int main() {
    float peso;
    double altura, imc;

    cout << "Ingresa peso en kg: ";
    cin >> peso;

    cout << "Ingresa altura en m: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "IMC: " << imc << endl;

    if (imc < 18.5)
        cout << "Bajo peso - Aumentar alimentacion y consultar especialista";
    else if (imc >= 18.5 && imc < 25)
        cout << "Normal - Mantener habitos saludables";
    else if (imc >= 25 && imc < 30)
        cout << "Sobrepeso - Mejorar dieta y hacer ejercicio";
    else if (imc >= 30 && imc < 35)
        cout << "Obesidad I - Control medico y actividad fisica";
    else
        cout << "Obesidad II - Consultar medico urgentemente";

    return 0;
}
