#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"

void EJ2() {


    std::cout << "El area del triangulo de base 10 y altura 5 es: " << Geometria::calcularAreaTriangulo(10, 5) << std::endl;

    std::cout << "El area del circulo de radio 5 es: " << Geometria::calcularAreaCirculo(5) << std::endl;



}