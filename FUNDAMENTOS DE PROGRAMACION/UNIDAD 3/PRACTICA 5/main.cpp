// Diego Cardenas Vaarela
// Practica 5
#include <iostream>
using namespace std;
int main() {
    int a, b, c, m;

    cout << "Ingrese el número A:" << endl;
    cin >> a;

    cout << "Ingrese el numero B:" << endl;
    cin >> b;

    cout << "Ingrese el numero C:" << endl;
    cin >> c;

    if ((b > a && a > c) || (c > a && a > b)) {
        m = a;
    }

    if ((a > b && b > c) || (c > b && b > a)) {
        m = b;
    }

    if ((b > c && c > a) || (a > c && c > b))
    {
        m = c;
    }

    m = 0;

    cout << "El numero del medio es " << m;
    return 0;
}
