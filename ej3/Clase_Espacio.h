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

#endif // GEOMETRIA_H