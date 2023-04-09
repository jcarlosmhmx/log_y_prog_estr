/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
Actividad 5 Ejercicio 4
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>

using namespace std;

struct Person {
    char name[50];
    int matricula;
    string carrera;
    int age;
    float promedio;
    string direccion;
};

int main (){
Person p1;
    cout << "Ingrese el nombre del estudiante: ";
    cin.get(p1.name,50);
    cout << "Ingrese la matrícula del estudiante: ";
    cin >> p1.matricula; 
    cout << "Ingrese la carrera del estudiante: ";
    cin >> p1.carrera; 
    cout << "Ingrese el promedio del estudiante: ";
    cin >> p1.promedio;
    cout << "Ingrese la dirección del estudiante: ";
    cin >> p1.direccion;
    cout << "Matricula: "<<p1.matricula<<endl;
    cout << "El nombre del estudiante es: " << p1.name << endl;
    cout << "La carrera del estudiante es: "<< p1.carrera<<endl;
    cout << "Promedio: " << p1.promedio << endl;
    cout << "La dirección del estudiante es: "<<p1.direccion<<endl; 
    
    return 0;
   
}
