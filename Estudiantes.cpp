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

int main() {

    int opcion;

    do {

        mostrarMenu();

        cin >> opcion;

        switch(opcion) {

            case 1:
                cout << "Opcion registrar estudiante" << endl;
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