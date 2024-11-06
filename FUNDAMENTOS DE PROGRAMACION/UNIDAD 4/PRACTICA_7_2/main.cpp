#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    int c = 1;
    do {
        cout << c << endl;
        c+=2;
    } while (c<=n);

    c=1;
    do {
        c++;
        cout << c << endl;
        c++;
    } while (c<=n);

    return 0;
}
