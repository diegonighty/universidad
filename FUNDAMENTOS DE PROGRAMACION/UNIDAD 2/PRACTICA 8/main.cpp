// PRACTICA 8 - CELSIUS A FAHRENHEIT
// Diego Cárdenas Varela
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit" << endl;
    return 0;
}


