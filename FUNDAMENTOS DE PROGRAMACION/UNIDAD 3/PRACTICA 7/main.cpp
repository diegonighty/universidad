// PRACTICA 7 UNIDAD 3
// DIEGO CÁRDENAS VARELA
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Introduce A: " << endl;
    cin >> a;
    cout << "Introduce B: " << endl;
    cin >> b;
    cout << "Introduce C:" << endl;
    cin >> c;

    if (a == b) {
        if (c > a) {
            cout << "El mayor es " << c;
            cout << "El menor es " << b;
        } else {
            cout << "El mayor es " << a;
            cout << "El menor es" << c;
        }
    } else if (c == a) {
        if (b > a) {
            cout << "El mayor es " << b;
            cout << "El menor es " << a;
        } else {
            cout << "El mayor es " << a;
            cout << "El menor es " << b;
        }
    } else if (b == c) {
        if (a > c) {
            cout << "El mayor es " << a;
            cout << "El menor es " << c;
        } else {
            cout << "El mayor es " << c;
            cout << "El menor es " << a;
        }
    } else {
        cout << "No hay dos numeros iguales";
    }

    return 0;
}