// PRACTICA 12 UNIDAD 3 DIEGO CARDENAS
#include <iostream>
using namespace std;
int main() {

    char letra;
    cout << "Ingrese una letra ";
    cin >> letra;

    switch (letra) {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        cout << "Usted ingreso la vocal " << letra;
        break;
    default:
        cout << "No es vocal";
        break;
    }

    return 0;
}
