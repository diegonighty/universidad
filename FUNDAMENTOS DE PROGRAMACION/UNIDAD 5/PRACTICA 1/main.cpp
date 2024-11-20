// Diego Cárdenas PRACTICA 1 UNIDAD 5
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
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i];
    }

    double promedio = static_cast<double>(suma) / n;
    cout << "El promedio de los elementos del vector es: " << promedio << endl;

    return 0;
}
