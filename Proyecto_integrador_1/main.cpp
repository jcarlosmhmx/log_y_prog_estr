/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
PROYECTO INTEGRADOR ETAPA 1 
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>
#include <string>

using namespace std;

void limpiar_pantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void despliega_menu() {
    limpiar_pantalla();
    cout << "=============================================" << endl;
    cout << "      LÓGICA Y PROGRAMACIÓN ESTRUCTURADA     " << endl;
    cout << "         PROYECTO INTEGRADOR ETAPA 1         " << endl;
    cout << "          JUAN CARLOS MORALES HERRERA        " << endl;
    cout << "                MENÚ DE OPCIONES             " << endl;
    cout << "=============================================" << endl;
    cout << "1. Alta de estudiantes" << endl;
    cout << "2. Baja de estudiantes" << endl;
    cout << "3. Modificaciones de estudiantes" << endl;
    cout << "4. Búsqueda de estudiantes" << endl;
    cout << "5. Salir" << endl;
    cout << "=============================================" << endl;
}

int main() {
    int opcion = 0;
    while (opcion != 5) {
        despliega_menu();
        cout << "Seleccione una opción entre [1...5]: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Alta de estudiantes
                break;
            case 2:
                // Baja de estiudiantes
                break;
            case 3:
                // Modificaciones de estudiantes
                break;
            case 4:
                // Búsqueda de estudiantes
                break;
            case 5:
                cout << "Adios" << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
                break;
        }

        cout << "Presione Enter para continuar...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
