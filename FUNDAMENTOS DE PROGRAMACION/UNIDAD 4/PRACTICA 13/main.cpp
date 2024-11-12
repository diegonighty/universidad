// PRACTICA 13
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Factorial de: ";
    cin >> x;

    int i = 1;
    int l = x;
    do {
        x *= i++;
    } while (i < l);

    cout << "Factorial: " << x << endl;
    return 0;
}
