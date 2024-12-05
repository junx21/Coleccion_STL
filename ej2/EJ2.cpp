/*Ejercicio 2: Espacio de nombres repartido entre diferentes archivos
 Crea un programa donde defines un espacio de nombres "Geometría" en dos archivos de código separados
 (por ejemplo, "triángulo.cpp" y "círculo.cpp"). Cada archivo debe contener una función
 (por ejemplo, "calcularArea") correspondiente a la geometría específica.
 Finalmente, desde la función main en otro archivo, utiliza estas funciones.*/

#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"

void EJ2() {


    std::cout << "El area del triangulo de base 10 y altura 5 es: " << Geometria::calcularAreaTriangulo(10, 5) << std::endl;

    std::cout << "El area del circulo de radio 5 es: " << Geometria::calcularAreaCirculo(5) << std::endl;



}