// UNIDAD 3 PRACTICA 1
// DIEGO CARDENAS
// Informar si un numero es positivo
#include <iostream>
using namespace std;

int main()
{
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    } else {
        cout << "El numero no es positivo" << endl;
    }

    return 0;
}
