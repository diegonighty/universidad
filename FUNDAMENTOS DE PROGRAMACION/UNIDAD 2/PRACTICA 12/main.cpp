// PRACTICA 12
// DIEGO CARDENAS
#include <iostream>
using namespace std;
int main() {
    double dolares, tipoDeCambio;
    cout << "Ingresa la cantidad de dolares: ";
    cin >> dolares;
    cout << "Ingresa el tipo de cambio: ";
    cin >> tipoDeCambio;

    double pesos = dolares * tipoDeCambio;
    cout << "La cantidad de pesos es: " << pesos << endl;
    return 0;
}