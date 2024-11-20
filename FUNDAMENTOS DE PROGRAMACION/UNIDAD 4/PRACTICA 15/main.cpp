// PRACTICA 15 DIEGO CÁRDENAS
// CALCULAR LAS POTENCIAS DE 1 A N
// 1^1 = 1
// 2^2 = 4
// 3^3 = 27
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Hasta el número: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int potencia = 1;
        for (int j = 1; j <= i; j++) {
            potencia *= i;
        }
        cout << i << "^" << i << " = " << potencia << endl;
    }

    return 0;
}
