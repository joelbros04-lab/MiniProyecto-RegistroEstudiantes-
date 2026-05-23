#include <iostream>
using namespace std;

// Funcion para mostrar menu
void mostrarMenu() {

    cout << "\n===== SISTEMA DE ESTUDIANTES =====" << endl;

    cout << "1. Registrar estudiante" << endl;
    cout << "2. Mostrar estudiantes" << endl;
    cout << "3. Calcular promedio general" << endl;
    cout << "4. Buscar nota mayor" << endl;
    cout << "5. Salir" << endl;

    cout << "Seleccione una opcion: ";
}
const int MAX = 50;

string nombres[MAX];
int edades[MAX];
double notas[MAX];

int cantidad = 0;

void registrarEstudiante(
    string nombres[],
    int edades[],
    double notas[],
    int &cantidad
) {

    cout << "\n=== REGISTRAR ESTUDIANTE ===" << endl;

    cout << "Ingrese nombre: ";
    cin >> nombres[cantidad];

    cout << "Ingrese edad: ";
    cin >> edades[cantidad];

    // Validacion edad
    while(edades[cantidad] <= 0) {

        cout << "Edad invalida. Ingrese nuevamente: ";
        cin >> edades[cantidad];
    }

    cout << "Ingrese nota: ";
    cin >> notas[cantidad];

    // Validacion nota
    while(notas[cantidad] < 0 || notas[cantidad] > 20) {

        cout << "Nota invalida. Ingrese nuevamente: ";
        cin >> notas[cantidad];
    }

    // IMPORTANTE
    // aumenta la cantidad de estudiantes
    cantidad++;

    cout << "Estudiante registrado correctamente." << endl;
}

int main() {

    int opcion;

    do {

        mostrarMenu();

        cin >> opcion;

        switch(opcion) {

            case 1:
                registrarEstudiante(nombres, edades, notas, cantidad);
                break;

            case 2:
                cout << "Opcion mostrar estudiantes" << endl;
                break;

            case 3:
                cout << "Opcion promedio general" << endl;
                break;

            case 4:
                cout << "Opcion nota mayor" << endl;
                break;

            case 5:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 5);

    return 0;
}