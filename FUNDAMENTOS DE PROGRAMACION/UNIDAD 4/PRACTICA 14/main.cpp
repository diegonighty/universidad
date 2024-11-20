// PRACTICA 14 DIEGO CARDENAS
#include <iostream>
using namespace std;
int main()
{
    int x, y, t, ct, cm;
    cout << "X = "; cin >> x;
    cout << "Y = "; cin >> y;

    ct = x;
    do
    {
        cm=1;
        do
        {
            t=ct*cm;
            cout << ct << "*" << cm << " = " << t << endl;
            cm++;
        } while(cm <= 10);
        cout << endl;

        if (x > y) ct--;
        else ct++;
        system("pause");
    } while ((y > x && ct <= y) || (x > y && ct >= y));

    return 0;
}
