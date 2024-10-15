// DIEGO CARDENAS VARELA
// PRACTICA 14
// PROMEDIO
#include <iostream>
using namespace std;
int main() {
    float materiaUno, materiaDos, materiaTres, materiaCuatro, materiaCinco;
    cout << "Ingrese la calificación de la materia 1" << endl;
    cin >> materiaUno;

    cout << "Ingrese la calificación de la materia 2" << endl;
    cin >>  materiaDos;

    cout << "Ingrese la calificación de la materia 3" << endl;
    cin >>  materiaTres;

    cout << "Ingrese la calificación de la materia 4" << endl;
    cin >>  materiaCuatro;

    cout << "Ingrese la calificación de la materia 5" << endl;
    cin >>  materiaCinco;

    float promedio = (materiaUno + materiaDos + materiaTres + materiaCuatro + materiaCinco) / 5;
    if (promedio >= 7) {
        cout << "Aprobaste con un " << promedio;
    } else {
        cout << "Reprobadote con un " << promedio;
    }

    return 0;
}
