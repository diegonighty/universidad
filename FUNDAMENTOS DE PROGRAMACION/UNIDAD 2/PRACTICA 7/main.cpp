// PRACTICA 7 UNIDAD 2
// Siguiente: informar el n% de un numero
// Diego Cárdenas 12/09/2024
#include <iostream>
using namespace std;

int main() {
    float valor, porcentaje;
    cout << "Ingresa el valor de la variable: " << endl;
    cin >> valor;

    cout << "Ingresa el porcentaje a calcular: " << endl;
    cin >> porcentaje;

    float porciento = valor * (porcentaje / 100);
    cout << "El " << porcentaje << "% es: " << porciento << endl;

    return 0;
}