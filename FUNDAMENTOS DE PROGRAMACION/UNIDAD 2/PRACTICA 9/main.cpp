// PRACTICA 9 UNIDAD 2 - OPERACIONES BASICAS
// Diego Cárdenas 9/17/24
#include <iostream>
using namespace std;
int main() {
    double a, b, suma, resta, multiplicacion, division;
    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

    cout << "La suma de " << a << " + " << b << " es: " << suma << endl;
    cout << "La resta de " << a << " - " << b << " es: " << resta << endl;
    cout << "La multiplicación de " << a << " * " << b << " es: " << multiplicacion << endl;
    cout << "La división de " << a << " / " << b << " es: " << division << endl;
    return 0;
}
