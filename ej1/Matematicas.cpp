/*Ejercicio 1: Utilización completa de un espacio de nombres Escribe un programa que defina un
 espacio de nombres "Matemáticas" que contenga dos funciones: suma y resta.
 Luego, desde la función main, utiliza estas funciones.*/

#include "Matematicas.h"


namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}