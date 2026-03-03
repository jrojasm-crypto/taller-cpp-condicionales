#include <iostream>

const int Read = 0b001;  
const int Write = 0b010; 
const int Execute = 0b100;   //permisos con bits//

int main() {
    int Permisos;

//permisos de 0 a 7 para cada valor entre leer, escribir y ejecutar//

    std::cout << "Ingresa un valor entero entre 0 - 7: \n";   
    std::cin >> Permisos;
    std::cout << "Tus permisos actuales: \n" ;

    //confirmar los permisos con &//
    if (Permisos & Read)
        std::cout << "Tienes permiso de leer \n";
    else
        std::cout << "No tiene permiso de leer \n";

    if (Permisos & Write)
        std::cout << "Tiene permiso de escribir \n";
    else
        std::cout << "No tiene permiso de escribir \n";

    if (Permisos & Execute)
        std::cout << "Tiene permiso de ejecutar \n";
    else
        std::cout << "No tiene permiso de ejecutar \n" ;

    //permiso con |//
    std::cout << "Agregando permiso de ejecutar... \n";
    Permisos = Permisos | Execute;

    //quitar permiso con & y ~//
    std::cout << "Quitando permiso de escribir... \n";
    Permisos = Permisos & ~Write;
    std::cout << "Permisos finales: \n";

    if (Permisos & Read)
        std::cout << "Leyendo ";
    if (Permisos & Write)
        std::cout << "Escribiendo ";
    if (Permisos & Execute)
        std::cout << "Ejecutando ";

    return 0;
}
