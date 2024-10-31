#include <iostream>
using namespace std;

int main() {
    int n, num;
    int positivos = 0, negativos = 0, ceros = 0;

    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa un número: ";
        cin >> num;
        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}