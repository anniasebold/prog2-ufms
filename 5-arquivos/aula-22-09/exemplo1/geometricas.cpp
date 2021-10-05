#include "geometricas.h"
#include <math.h>


double perimetroQuadrado(double lado)
{
    return 4*lado;
}


double perimetroTriangulo(double lado1, double lado2, double lado3)
{
    return lado1 + lado2 + lado3;
}


double perimetroCirculo(double raio)
{
    return 2*PI*raio;
}


double areaQuadrado(double lado)
{
    return lado*lado;
}


double areaTriangulo(double base, double altura)
{
    return base*altura / 2;
}


double areaCirculo(double raio)
{
    return PI*raio*raio;
}


double volumeCubo(double lado)
{
    return lado*lado*lado;
}



double volumeTetraedro(double lado, double altura)
{
    return (double)1/3*areaTriangulo(lado, lado*sqrt(altura) / 2)*altura;
}



double volumeEsfera(double raio)
{
    return (double)4/3*PI*raio*raio;
}
