// DIEGO CÁRDENAS VARELA - EXAMEN UNIDAD 3 - 24 / 10 / 24
#include <iostream>
using namespace std;
int main() {
    double pata1, pata2, pata3, pata4;
    cout << "Ingrese la longitud de la pata 1" << endl;
    cin >> pata1;

    cout << "Ingrese la longitud de la pata 2" << endl;
    cin >> pata2;

    cout << "Ingrese la longitud de la pata 3" << endl;
    cin >> pata3;

    cout << "Ingrese la longitud de la pata 4" << endl;
    cin >> pata4;

    if (pata1 == pata2 && pata2 == pata3 && pata3 == pata4) {
        cout << "Se puede formar una mesa de 4 patas";
    } else if ((pata1 == pata2 && pata2 == pata3) || (pata2 == pata3 && pata3 == pata4)) {
        cout << "Se puede formar una mesa de 3 patas";
    } else if (
        pata1 == pata2 || pata1 == pata3 || pata1 == pata4 ||
        pata2 == pata3 || pata2 == pata4 ||
        pata3 == pata4
    ) {
        cout << "Se puede formar una mesa de 2 patas";
    } else {
        cout << "No se puede formar una mesa";
    }

    return 0;
}
