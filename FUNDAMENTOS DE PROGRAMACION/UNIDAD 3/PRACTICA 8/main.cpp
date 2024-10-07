// PRACTICA 8 UNIDAD 3 - DIEGO CÁRDENAS
// 7 de oct de 2024
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese el número del día de la semana: ";
    cin >> dia;

    if (dia == 1) {
        cout << "Lunes";
    } else if (dia == 2) {
        cout << "Martes";
    } else if (dia == 3) {
        cout << "Miércoles";
    } else if (dia == 4) {
        cout << "Jueves";
    } else if (dia == 5) {
        cout << "Viernes";
    } else if (dia == 6) {
        cout << "Sábado";
    } else if (dia == 7) {
        cout << "Domingo";
    } else {
        cout << "Número de día incorrecto";
    }

    return 0;
}
