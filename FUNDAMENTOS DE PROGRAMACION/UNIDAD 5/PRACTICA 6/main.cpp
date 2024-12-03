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
        cin >> vector[n];
    }

    // recorrer el vector de derecha a izquierda
    int aux;
    for (int i = 0; i < n / 2; i++) {
        aux = vector[i];
        vector[i] = vector[n - i - 1];
        vector[n - i - 1] = aux;
    }


    for (int i = 0; i < n; i++) {
        cout << "El valor " << i + 1 << " es: " << vector[i] << endl;
    }

    return 0;
}
