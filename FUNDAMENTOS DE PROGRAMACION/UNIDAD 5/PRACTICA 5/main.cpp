// PRACTICA 5
// DIEGO CÁRDENAS VARELA
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Introduce el tamaño del vector: ";
    cin >> n;

    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Introduce el valor " << i + 1 << ": ";
        int valor;
        cin >> valor;
        if (valor < 0) {
            cout << "El valor no puede ser negativo" << endl;
            i--;
        } else {
            vector[i] = valor;
        }
    }

    char respuesta;
    do
    {
        int nuevoVector[n];
        for (int i = 0; i <= n; i++) {
            nuevoVector[i] = vector[i == 0 ? n - 1 : i - 1];
        }

        for (int i = 0; i < n; i++) {
            vector[i] = nuevoVector[i];
        }

        for (int i = 0; i < n; i++) {
            cout << vector[i] << " ";
        }


        cout << endl << "¿Desea rotar el vector? (s/n): ";
        cin >> respuesta;

        system("cls");
    } while (respuesta == 's' || respuesta == 'S');


    return 0;
}
