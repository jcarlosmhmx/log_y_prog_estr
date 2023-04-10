/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
PROYECTO INTEGRADOR ETAPA 1 
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    char choice;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "Display in lowercase or uppercase? (l/u): ";
    cin >> choice;
    
    if (choice == 'l' || choice == 'L') {
        for (int i = 0; i < input.length(); i++) {
            input[i] = tolower(input[i]);
        }
        cout << "Lowercase: " << input << endl;
    }
    else if (choice == 'u' || choice == 'U') {
        for (int i = 0; i < input.length(); i++) {
            input[i] = toupper(input[i]);
        }
        cout << "Uppercase: " << input << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }
    
    return 0;
}

