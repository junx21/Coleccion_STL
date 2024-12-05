/*Ejercicio 4: Declaración de subespacios de nombres Crea un espacio de nombres "Ciencia"
que contenga un subespacio de nombres "Física". En "Física", define una constante para la velocidad de
la luz y una función para calcular
la energía a partir de la masa (E=mc^2). Utiliza la constante y la función desde
la función main.*/

#include "Fisica.h"
#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

void EJ4() {
    double masa = 10.0;

    double energia = Ciencia::Fisica::calcularEnergia(masa);

    std::cout << "La energía para una masa de " << masa << " kg es: " << energia << " Joules." << std::endl;
}