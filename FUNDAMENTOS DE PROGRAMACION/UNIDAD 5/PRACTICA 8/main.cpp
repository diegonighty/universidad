// DIEGO CÁRDENAS VARELA PRACTICA 8
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduce un número: ";
    cin >> n;
    char caracteres[n];

    int i = 0;
    while (i < n)
    {
        cout << "Introduce un caracter: ";
        cin >> caracteres[i];
        i++;
    }

    i = 0;
    int vocales = 0;
    int consonantes = 0;
    while (i < n)
    {
        switch (tolower(caracteres[i]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vocales++;
            break;
        default:
            break;
        }

        switch (tolower(caracteres[i]))
        {
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            consonantes++;
            break;
        default:
            break;
        }

        i++;
    }

    cout << "El número de vocales es: " << vocales << endl;
    cout << "El número de consonantes es: " << consonantes << endl;

    return 0;
}
