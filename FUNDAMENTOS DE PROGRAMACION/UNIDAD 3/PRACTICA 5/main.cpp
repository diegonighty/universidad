// PRACTICA 5 - NUMERO MEDIO
// DIEGO CARDENAS
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingresa tres numeros enteros: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c)) {
        cout << "El numero medio es: " << a << endl;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        cout << "El numero medio es: " << b << endl;
    } else {
        cout << "El numero medio es: " << c << endl;
    }

    return 0;
}