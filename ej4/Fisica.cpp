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