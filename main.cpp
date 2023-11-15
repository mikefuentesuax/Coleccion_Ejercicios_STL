#include <iostream>
#include "matematicas.h"
#include "geometria.h"
#include "circulos.h"
#include "ciencia.h"
using namespace std;

int main(){
    cout << "Suma: " << matematicas::suma(5, 3) << std::endl;
    cout << "Resta: " << matematicas::resta(5, 3) << std::endl;
    cout << "Division: " << matematicas::division(5,3) << std::endl;
    cout << "Exponencial: " << matematicas::expo(5) << std::endl;
    cout << "Raiz: " << matematicas::raiz(16, 2) << std::endl;
    cout << "Logaritmo: " << matematicas::logaritmo(5) << std::endl;
    cout << "Area de un triangulo: " << geometria::triangulo(5, 3) << std::endl;
    cout << "Area de un circulo: " << geometria::circulo(5) << std::endl;
    cout << "Area de un cuadrado: " << geometria::cuadrado(5) << std::endl;
    cout << "Area de un rectangulo: " << geometria::rectangulo(5, 3) << std::endl;
    cout << "Area de un circulo: " << circulos::Circulo(5).calcularArea() << std::endl;
    cout << "Perimetro de un circulo: " << circulos::Circulo(5).calcularPerimetro() << std::endl;
    cout << "Energia: " << ciencia::Fisica::calcularEnergia(5) << std::endl;
    cout << "Fuerza: " << ciencia::Fisica::calcularFuerza(5, 3, 2) << std::endl;
    cout << "Fuerza electrica: " << ciencia::Fisica::calcularFuerzaElectrica(5, 3, 2) << std::endl;
    return 0;
}