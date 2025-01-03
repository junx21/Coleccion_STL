/*Ejercicio 3: Relación entre clase y espacio de nombres Define una clase "Círculo"
 dentro de un espacio de nombres "Geometría". Incluye al menos dos métodos en esta clase,
 como "calcularArea" y "calcularPerímetro". Utiliza esta clase desde la función main.*/

#include "Clase_Espacio.h"
#include <iostream>



namespace Geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3,14 * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * 3,14 * radio;
    }
}

void EJ3() {

    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

}