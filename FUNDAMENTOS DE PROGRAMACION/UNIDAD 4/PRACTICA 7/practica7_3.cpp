#include <iostream>
using namespace std;

int main() {
    int n, num, i = 0;
    int positivos = 0, negativos = 0, ceros = 0;

    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;

    do {
        cout << "Ingresa un número: ";
        cin >> num;
        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            ceros++;
        }
        i++;
    } while (i < n);

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}
