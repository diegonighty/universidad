// DIEGO CÁRDENAS VARELA
// PRACTICA 8 UNIDAD 4
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Tabla del: ";
    cin >> x;

    int y = 1;
    cout << "Hasta el: ";
    cin >> y;

    int c = 1;
    while (c <= y) {
        const int t = x * c;
        cout << x << " x " << c << " = " << t << endl;
        c++;
    }
    return 0;
}
