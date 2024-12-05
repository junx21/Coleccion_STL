/*Ejercicio 1: Utilización completa de un espacio de nombres Escribe un programa que defina un
 espacio de nombres "Matemáticas" que contenga dos funciones: suma y resta.
 Luego, desde la función main, utiliza estas funciones.*/

#include "Matematicas.h"
#include <iostream>


namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}

void EJ1() {

    std::cout << "\nEjercicio 1\n" << std::endl;
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
}