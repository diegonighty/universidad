// PRACTICA 11 DIVISAS
// DIEGO CARDENAS
// CALCULAR LA CONVERSION DE PESOS A DPOLARES
// CONSIDERANDO QUE NO SE CONOCE EL TIPO DE CAMBIO
#include <iostream>
using namespace std;
int main() {
    double pesos, tipoDeCambio;
    cout << "Ingresa la cantidad de pesos: ";
    cin >> pesos;
    cout << "Ingresa el tipo de cambio: ";
    cin >> tipoDeCambio;

    double dolares = pesos / tipoDeCambio;
    cout << "La cantidad de dolares es: " << dolares << endl;
    return 0;
}
