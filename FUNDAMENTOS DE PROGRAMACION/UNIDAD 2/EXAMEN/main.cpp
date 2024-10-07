// EXAMEN UNIDAD 2
// DIEGO CARDENAS
#include <iostream>
using namespace std;

int main()
{
    double pl, cl, ds, sb, dsf, pf;
    cout << "Introduce el precio del libro " << endl;
    cin >> pl;

    cout << "Introduce la cantidad de hojas del libro " << endl;
    cin >> cl;

    cout << "Introduce el descuento" << endl;
    cin >> ds;

    sb = pl + (cl * 1.5);
    dsf = sb * (ds / 100);
    pf = sb - dsf;

    cout << "El subtotal es: " << sb << endl;
    cout << "El descuento es de: " << dsf << endl;
    cout << "El precio final es de: " << pf << endl;
    return 0;
}
