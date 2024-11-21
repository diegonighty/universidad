// Diego Cárdenas PRACTICA 16 UNIDAD 4
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    cout << endl;

    int v[n];
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
        cout << endl;

        if (v[i] < 0 || v[i] > 100) {
            cout << "El valor ingresado no es valido" << endl;
            i--;
        }
    }

    int promedio = 0;
    for (int i = 0; i < n; ++i) {
        promedio += v[i];
    }

    promedio /= n;
    cout << "El promedio es: " << promedio << endl;
    int cp = 0;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = " << v[i] << endl;

        if (v[i] == promedio) {
            cp++;
        }
    }

    cout << "El promedio se encontro " << cp << " veces" << endl;

    return 0;
}
