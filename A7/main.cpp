/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
ACTIVIDAD 7
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int choice;

    cout << "=============================================" << endl;
    cout << "      LÓGICA Y PROGRAMACIÓN ESTRUCTURADA     " << endl;
    cout << "                  ACTIVIDAD 7                " << endl;
    cout << "          JUAN CARLOS MORALES HERRERA        " << endl;
    cout << "=============================================" << endl;
    cout << "Favor de ingresar una cadena: ";
    getline(cin, input);
    
    cout << "¿Desea mostrar la cadena en mayúsculas(1) o minúsculas(2)? : ";
    cin >> choice;
    
    if (choice == 2) {
        for (int i = 0; i < input.length(); i++) {
            input[i] = tolower(input[i]);
        }
        cout << "Minúsculas: " << input << endl;
    }
    else if (choice == 1) {
        for (int i = 0; i < input.length(); i++) {
            input[i] = toupper(input[i]);
        }
        cout << "Mayúscula: " << input << endl;
    }
    else {
        cout << "Opción inválida." << endl;
    }
    
    return 0;
}

