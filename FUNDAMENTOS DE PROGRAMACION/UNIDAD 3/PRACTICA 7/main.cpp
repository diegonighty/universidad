#include <iostream>

using namespace std;

int main() {
    double salarioPorHora;
    int horasTrabajadas;

    cout << "Ingrese el salario por hora: ";
    cin >> salarioPorHora;
    cout << "Ingrese el número de horas trabajadas (0-24): ";
    cin >> horasTrabajadas;

    if (horasTrabajadas < 0 || horasTrabajadas > 24) {
        cout << "Número de horas inválido. Debe estar entre 0 y 24." << endl;
        return 1;
    }

    double salarioDiario = 0;
    int horasNormales = 0, horasDobles = 0, horasTriples = 0;

    if (horasTrabajadas <= 8) {
        horasNormales = horasTrabajadas;
    } else if (horasTrabajadas <= 12) {
        horasNormales = 8;
        horasDobles = horasTrabajadas - 8;
    } else {
        horasNormales = 8;
        horasDobles = 4;
        horasTriples = horasTrabajadas - 12;
    }

    salarioDiario = (horasNormales * salarioPorHora) +
                    (horasDobles * salarioPorHora * 2) +
                    (horasTriples * salarioPorHora * 3);

    cout << "Salario diario: " << salarioDiario << endl;
    cout << "Horas normales: " << horasNormales << " y su salario: " << horasNormales * salarioPorHora << endl;
    cout << "Horas dobles: " << horasDobles << " y su salario: " << horasDobles * salarioPorHora * 2 << endl;
    cout << "Horas triples: " << horasTriples << " y su salario: " << horasTriples * salarioPorHora * 3 << endl;

    return 0;
}