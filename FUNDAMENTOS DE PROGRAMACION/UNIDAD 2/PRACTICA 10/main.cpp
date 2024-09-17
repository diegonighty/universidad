// PRACTICA 10 CIRCULO
// Diego Cardenas
// 17/9/24
#include <iostream>
using namespace std;
int main() {
    // area = pi * radio*radio
    // perimetro = pi * radio
    // volumen = 4/3 * pi * radio*radio*radio
    float diametro, radio, area, perimetro, volumen, pi;
    pi = 3.1416;

    cout << "Ingrese el diametro del circulo: ";
    cin >> diametro;

    radio = diametro / 2;
    area = pi * radio * radio;
    perimetro = pi * diametro;
    volumen = 4/3 * pi * radio * radio * radio;

    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}
