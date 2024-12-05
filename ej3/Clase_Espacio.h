#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea();
        double calcularPerimetro();
    };
}

void EJ3();

#endif // GEOMETRIA_H