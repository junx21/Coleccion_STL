#include "Clase_Espacio.h"



namespace Geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3,14 * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * 3,14 * radio;
    }
}