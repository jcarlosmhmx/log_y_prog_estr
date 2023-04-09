/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
Actividad 5 Ejercicio 1
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>
#include <string>

std::string esPar(int num) {
    if (num % 2 == 1) {
        return "impar";
    } else {
        return "par";
    }
}

int main() {
    int num;
    std::cout << "Inserte un número: ";
    std::cin >> num;
    std::cout << num << " es un número " << esPar(num) << std::endl;
    return 0;
}
