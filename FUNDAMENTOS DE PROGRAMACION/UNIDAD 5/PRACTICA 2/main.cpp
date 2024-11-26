// PRACTICA 2 DIEGO CÁRDENAS VARELA
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Introduce el número del vector: ";
    cin >> n;

    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Introduce el valor " << i + 1 << " del vector: ";
        cin >> vector[i];
    }

    int mayores = 0;
    int menores = 0;
    for (int i = 0; i < n; i++) {
        if (vector[i] > 50) {
            mayores++;
        } else if (vector[i] < 50) {
            menores++;
        }
    }

    cout << "Hay " << mayores << " números mayores a 50 y " << menores << " menores a 50." << endl;
    return 0;
}
