// PRACTICA 5 UNIDAD 2
// Siguiente: informa el anterior y siguiente valor
// Diego Cárdenas 12/09/2024
#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingresa el valor de la variable: " << endl;
    cin >> valor;

    int siguiente = valor + 1;
    cout << "El siguiente valor es: " << siguiente << endl;

    int anterior = valor - 1;
    cout << "El anterior valor es: " << anterior << endl;

    return 0;
}