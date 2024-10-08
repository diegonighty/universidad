// PRACTICA 10 UNIDAD 3 - DIEGO CÁRDENAS
// 7 de oct de 2024
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese el número del día de la semana: ";
    cin >> dia;

    switch (dia) {
    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;
    case 3:
        cout << "Miércoles";
        break;
    case 4:
        cout << "Jueves";
        break;
    case 5:
        cout << "Viernes";
        break;
    case 6:
        cout << "Sábado";
        break;
    case 7:
        cout << "Domingo";
        break;
    default:
        cout << "Número de día incorrecto";
        break;
    }

    return 0;
}