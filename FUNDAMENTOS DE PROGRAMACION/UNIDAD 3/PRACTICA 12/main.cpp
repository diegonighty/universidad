// PRACTICA 12 UNIDAD 3 DIEGO CARDENAS
#include <iostream>
using namespace std;
int main() {

    char letra;
    cout << "Ingrese una letra ";
    cin >> letra;

    switch (letra) {
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        cout << "Usted ingreso la consonante " << letra;
        break;
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        cout << "Usted ingreso la vocal " << letra;
        break;
    default:
        cout << "No pertenece a el abecedario";
        break;
    }

    return 0;
}
