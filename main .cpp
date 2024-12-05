#include <iostream>
#include "ej1/Matematicas.h"
#include "ej2/EJ2.h"
#include "ej3/Clase_Espacio.h"
#include "ej4/Fisica.h"
#include "ej5/STL.h"



int main() {
    int ejercicio = 0;

    std::cout << "Elija el ejercicio a ejecutar (1,2,3,4,5): ";
    std::cin >> ejercicio;

    switch (ejercicio) {
        case 1: EJ1(); break;
        case 2: EJ2(); break;
        case 3: EJ3(); break;
        case 4: EJ4(); break;
        case 5: EJ5(); break;

        default:
            std::cout << "EJ no encontrado" << std::endl;
    }



    return 0;
}