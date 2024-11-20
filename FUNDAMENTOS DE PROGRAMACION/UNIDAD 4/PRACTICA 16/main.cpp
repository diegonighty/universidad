// Practica 16 Vectores
#include <iostream>
using namespace std;
int main()
{
    int v[99];

    v[0] = 5;
    v[1] = 3;

    cout << v[1] << endl;
    cout << v[100] << endl;

    for (int i = 0; i<2; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
