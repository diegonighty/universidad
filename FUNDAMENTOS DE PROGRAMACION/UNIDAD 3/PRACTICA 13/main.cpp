// PRACTICA 13 DIEGO CARDENAS
// UNIDAD 3
// Hacer un programa en c++ que permite eligir al usuario una acción el area, el perimetro o el volumen de un cuadrado, circulo, o triangulo usando switch
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion, figura;
    double area, perimetro, volumen;
    constexpr double PI = 3.14159265358979323846;

    cout << "Elige una acción:\n1. Área\n2. Perímetro\n3. Volumen\n";
    cin >> opcion;

    cout << "Elige una figura:\n1. Cuadrado\n2. Círculo\n3. Triángulo\n";
    cin >> figura;

    switch (opcion) {
        case 1: // Área
            switch (figura) {
                case 1: // Cuadrado
                    double lado;
                    cout << "Introduce el lado del cuadrado: ";
                    cin >> lado;
                    area = lado * lado;
                    cout << "El área del cuadrado es: " << area << endl;
                    break;
                case 2: // Círculo
                    double radio;
                    cout << "Introduce el radio del círculo: ";
                    cin >> radio;
                    area = PI * radio * radio;
                    cout << "El área del círculo es: " << area << endl;
                    break;
                case 3: // Triángulo
                    double base, altura;
                    cout << "Introduce la base y la altura del triángulo: ";
                    cin >> base >> altura;
                    area = 0.5 * base * altura;
                    cout << "El área del triángulo es: " << area << endl;
                    break;
                default:
                    cout << "Figura no válida." << endl;
            }
            break;
        case 2: // Perímetro
            switch (figura) {
                case 1: // Cuadrado
                    double lado;
                    cout << "Introduce el lado del cuadrado: ";
                    cin >> lado;
                    perimetro = 4 * lado;
                    cout << "El perímetro del cuadrado es: " << perimetro << endl;
                    break;
                case 2: // Círculo
                    double radio;
                    cout << "Introduce el radio del círculo: ";
                    cin >> radio;
                    perimetro = 2 * PI * radio;
                    cout << "El perímetro del círculo es: " << perimetro << endl;
                    break;
                case 3: // Triángulo
                    double lado1, lado2, lado3;
                    cout << "Introduce los tres lados del triángulo: ";
                    cin >> lado1 >> lado2 >> lado3;
                    perimetro = lado1 + lado2 + lado3;
                    cout << "El perímetro del triángulo es: " << perimetro << endl;
                    break;
                default:
                    cout << "Figura no válida." << endl;
            }
            break;
        case 3: // Volumen
            switch (figura) {
                case 1: // Cubo
                    double lado;
                    cout << "Introduce el lado del cubo: ";
                    cin >> lado;
                    volumen = lado * lado * lado;
                    cout << "El volumen del cubo es: " << volumen << endl;
                    break;
                case 2: // Esfera
                    double radio;
                    cout << "Introduce el radio de la esfera: ";
                    cin >> radio;
                    volumen = (4.0/3.0) * PI * pow(radio, 3);
                    cout << "El volumen de la esfera es: " << volumen << endl;
                    break;
                case 3: // Pirámide
                    double base, altura;
                    cout << "Introduce la base y la altura de la pirámide: ";
                    cin >> base >> altura;
                    volumen = (1.0/3.0) * base * base * altura;
                    cout << "El volumen de la pirámide es: " << volumen << endl;
                    break;
                default:
                    cout << "Figura no válida." << endl;
            }
            break;
        default:
            cout << "Acción no válida." << endl;
    }

    return 0;
}