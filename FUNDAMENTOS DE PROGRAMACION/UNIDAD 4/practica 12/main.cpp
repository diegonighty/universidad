// PRACTICA 12
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Factorial de: ";
    cin >> x;

    int i = x;
    while (i > 1) {
        x *= --i;
    }

    cout << "Factorial: " << x << endl;
    return 0;
}
