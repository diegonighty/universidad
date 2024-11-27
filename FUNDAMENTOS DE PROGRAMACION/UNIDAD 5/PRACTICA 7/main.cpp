// DIEGO CÁRDENAS VARELA PRACTICA 7 UNIDAD 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduce un número: ";
    cin >> n;

    char caracter[n];

    int i = 0;
    while (i < n) {
        cout << "Introduce un caracter: ";
        cin >> caracter[i];
        i++;
    }



    return 0;
}
