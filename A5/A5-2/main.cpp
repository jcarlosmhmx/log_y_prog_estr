/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
Actividad 5 Ejercicio 2
JUAN CARLOS MORALES HERRERA     
*/
#include <iostream>

using namespace std;

double CalcularPromedio(int arr[], int tamano) {
    int sum = 0;
    for (int i = 0; i < tamano; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / tamano;
}

int main() {
    int tamano_arreglo;
    cout << "¿Cuántas calificaciones desea ingresar? ";
    cin >> tamano_arreglo;
    const int SIZE = tamano_arreglo;
    int nums[SIZE];
    
    // leemos los números a promediar
    for (int i = 0; i < SIZE; i++) {
        cout << "Ingresa la calificación " << i+1 << ": ";
        cin >> nums[i];
    }
    
    // calcular promedio
    double promedio = CalcularPromedio(nums, SIZE);
    
    // mostramos el resultado
    cout << "El promedio es " << promedio << endl;
    
    return 0;
}
