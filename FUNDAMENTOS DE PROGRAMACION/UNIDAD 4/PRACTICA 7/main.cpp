#include <iostream>
using namespace std;
int main() {
    int n, c;
    cout << "Ingresa un numero: ";
    cin >> n;

    c=2;
    while (c<=n) {
        c++;
        cout << c << endl;
        c++;
    }

    c=2;
    while (c<=n) {
        cout << c << endl;
        c+=2;
    }

    return 0;
}
