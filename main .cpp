#include <iostream>
#include "ej1/Matematicas.h"
#include "ej2/Circulo.h"
#include "ej2/Triangulo.h"
#include "ej3/Clase_Espacio.h"
#include "ej4/Fisica.h"



int main() {

    std::cout << "\nEjercicio 1\n" << std::endl;
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

    std::cout << "\nEjercicio 2\n" << std::endl;
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;

    std::cout << "\nEjercicio 3\n" << std::endl;
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    std::cout << "\nEjercicio 4\n" << std::endl;
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;

    std::cout << "\nEjercicio 5\n" << std::endl;

    return 0;
}