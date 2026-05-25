#include <iostream>
using namespace std;

// Funcion para mostrar menu
void mostrarMenu() {

    cout << "\n===== SISTEMA DE ESTUDIANTES =====" << endl;

    cout << "1. Registrar estudiante" << endl;
    cout << "2. Mostrar estudiantes" << endl;
    cout << "3. Calcular promedio general" << endl;
    cout << "4. Buscar nota mayor" << endl;
    cout << "5. Buscar estudiante" << endl;
    cout << "6. Salir" << endl;

    cout << "Seleccione una opcion: ";
}

const int MAX = 50;

string nombres[MAX];
int edades[MAX];
double notas[MAX];

int cantidad = 0;

// Funcion para registrar estudiantes
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

    cantidad++;

    cout << "Estudiante registrado correctamente." << endl;
}

// Funcion para mostrar estudiantes
void mostrarEstudiantes(
    string nombres[],
    int edades[],
    double notas[],
    int cantidad
) {

    cout << "\n=== LISTA DE ESTUDIANTES ===" << endl;

    if(cantidad == 0) {

        cout << "No hay estudiantes registrados." << endl;

        return;
    }

    for(int i = 0; i < cantidad; i++) {

        cout << "\nEstudiante " << i + 1 << endl;

        cout << "Nombre: "
             << nombres[i] << endl;

        cout << "Edad: "
             << edades[i] << endl;

        cout << "Nota: "
             << notas[i] << endl;
    }
}

// Funcion para calcular promedio
double calcularPromedio(
    double notas[],
    int cantidad
) {

    if(cantidad == 0) {

        return 0;
    }

    double suma = 0;

    for(int i = 0; i < cantidad; i++) {

        suma += notas[i];
    }

    return suma / cantidad;
}

// Funcion para encontrar nota mayor
double encontrarMayor(
    double notas[],
    int cantidad
) {

    if(cantidad == 0) {

        return 0;
    }

    double mayor = notas[0];

    for(int i = 1; i < cantidad; i++) {

        if(notas[i] > mayor) {

            mayor = notas[i];
        }
    }

    return mayor;
}

// Funcion para buscar estudiante
void buscarEstudiante(
    string nombres[],
    int edades[],
    double notas[],
    int cantidad
) {

    string buscado;

    cout << "\nIngrese nombre a buscar: ";
    cin >> buscado;

    bool encontrado = false;

    for(int i = 0; i < cantidad; i++) {

        if(nombres[i] == buscado) {

            cout << "\n=== ESTUDIANTE ENCONTRADO ===" << endl;

            cout << "Nombre: "
                 << nombres[i] << endl;

            cout << "Edad: "
                 << edades[i] << endl;

            cout << "Nota: "
                 << notas[i] << endl;

            encontrado = true;
        }
    }

    if(!encontrado) {

        cout << "Estudiante no encontrado." << endl;
    }
}

int main() {

    int opcion;

    do {

        mostrarMenu();

        cin >> opcion;

        switch(opcion) {

            case 1:

                registrarEstudiante(
                    nombres,
                    edades,
                    notas,
                    cantidad
                );

                break;

            case 2:

                mostrarEstudiantes(
                    nombres,
                    edades,
                    notas,
                    cantidad
                );

                break;

            case 3:

                cout << "\nPROMEDIO GENERAL: "
                     << calcularPromedio(
                            notas,
                            cantidad
                        ) << endl;

                break;

            case 4:

                cout << "\nNOTA MAYOR: "
                     << encontrarMayor(
                            notas,
                            cantidad
                        ) << endl;

                break;

            case 5:

                buscarEstudiante(
                    nombres,
                    edades,
                    notas,
                    cantidad
                );

                break;

            case 6:

                cout << "\nSaliendo del sistema..." << endl;

                break;

            default:

                cout << "\nOpcion invalida." << endl;
        }

    } while(opcion != 6);

    return 0;
}