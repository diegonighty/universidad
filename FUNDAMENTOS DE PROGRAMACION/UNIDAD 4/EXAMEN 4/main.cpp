// EXAMEN UNIDAD 4 - DIEGO CÁRDENAS VARELA
// calcular el promedio de x cantidad de alumnos con n cantidad de materias
// cada uno, informar el promedio de cada alumno y el promedio general del grupo
#include <iostream>
using namespace std;

int main()
{
    int alumnos = 0;
    while (alumnos <= 0) {
        cout << "Ingrese la cantidad de alumnos: ";
        cin >> alumnos;
    }

    float promedioGeneral = 0;
    for (int i = 1; i <= alumnos; ++i) {
        cout << "Alumno " << i << endl;
        int materias = 0;
        while (materias <= 0) {
            cout << "Ingrese la cantidad de materias: ";
            cin >> materias;
        }

        float promedio = 0;
        for (int j = 1; j <= materias; ++j) {
            float calificacion = -1;
            while (calificacion < 0 || calificacion > 10) {
                cout << "Ingrese la calificación de la materia " << j << ": ";
                cin >> calificacion;
            }
            promedio += calificacion;
        }
        promedio /= materias;
        promedioGeneral += promedio;
        cout << "El promedio del alumno " << i << " es: " << promedio << endl;
    }

    promedioGeneral /= alumnos;
    cout << "El promedio general del grupo es: " << promedioGeneral << endl;

    return 0;
}
