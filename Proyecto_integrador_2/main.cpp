/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
PROYECTO INTEGRADOR ETAPA 2 
JUAN CARLOS MORALES HERRERA     
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Función para limpiar la pantalla
void limpiar_pantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


// Definimos la estructura del Alumno
struct Alumno {
    int matricula;
    string nombre;
    string apellido_paterno;
    string apellido_materno;
    string carrera;
    string email;
    string telefono;
};

//Función de altas
void altas(Alumno& alumno){

    cout << "Ingrese la matrícula del estudiante: ";
    cin >> alumno.matricula;

    cin.ignore();

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, alumno.nombre);
    
    cout << "Ingrese el apellido paterno: "; 
    getline(cin, alumno.apellido_paterno);
    
    cout << "Ingrese el apellido materno: ";
    getline(cin, alumno.apellido_materno); 
    
    cout << "Ingrese la carrera: ";
    getline(cin, alumno.carrera);
    
    cout << "Ingrese el email: ";
    getline(cin, alumno.email);
    
    cout << "Ingrese el teléfono: ";
    getline(cin, alumno.telefono);   

    cout << endl << "El alumno se ha guardado correctamente..." << endl;
}

//Función para buscar por matrícula
int buscarAlumnoPorMatricula(const vector<Alumno>& alumnos, int matricula){
    for (int i = 0; i < alumnos.size(); i++) {
        if (alumnos[i].matricula == matricula) {
            return i; // Regresará el indice de la matrícula
        }
    }
    return -1; // Regresará -1 si no encuentra coincidencias
}

// Define a function to delete a person from the vector
void borrarAlumno(vector<Alumno>& alumnos, int index) {
    alumnos.erase(alumnos.begin() + index);
}

//Función para mostrar la información
void mostrar(vector<Alumno>& alumnos, int index){
    cout << "Matrícula del alumno: " << alumnos[index].matricula << endl;
    cout << "Nombre del alumno: " << alumnos[index].nombre << endl;
    cout << "Apellido Paterno del alumno: " << alumnos[index].apellido_paterno << endl;
    cout << "Apellido Materno del alumno: " << alumnos[index].apellido_materno << endl;
    cout << "Carrera: " << alumnos[index].carrera << endl;
    cout << "Email del alumno: " << alumnos[index].email << endl;
    cout << "Teléfono del alumno: " << alumnos[index].telefono << endl;
}


//Función para desplegar el menú
void despliega_menu() {
    limpiar_pantalla();
    cout << "=============================================" << endl;
    cout << "      LÓGICA Y PROGRAMACIÓN ESTRUCTURADA     " << endl;
    cout << "         PROYECTO INTEGRADOR ETAPA 2         " << endl;
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
    vector<Alumno> alumnos;
    int opcion = 0;
    while (opcion != 5) {
        despliega_menu();
        cout << "Seleccione una opción entre [1...5]: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                    // Alta de estudiantes
                    Alumno alumno;

                    //Limpiamos la pantalla
                    limpiar_pantalla();

                    //Llamamos la función para el alta del alumno
                    altas(alumno);
                    alumnos.push_back(alumno);

                    break;
                }
                
            case 2:{
                    // Baja de estiudiantes
                    limpiar_pantalla();
                    int matriucula;                    
                    cout << "Ingrese la matrícula del alumno a eliminar: ";
                    cin >> matriucula;
                    cout << endl;

                    //Hacemos primero la búsqueda de la matrícula 
                    int index = buscarAlumnoPorMatricula(alumnos, matriucula);

                    if(index != -1){
                        int res;
                        mostrar(alumnos, index);
                        cout << "¿Seguro que quiere eliminar al alumno? 1. Sí / 2. No: ";
                        cin >> res;
                        if (res==1){
                            borrarAlumno(alumnos, index);
                            cout << "Se ha borrado el alumno" << endl;
                        } else {
                            cout << "Operación Cancelada" <<endl;
                        }
                    } else {
                        cout << "No se encontró el alumno" << endl;
                    }                    

                    break;
                }
                
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
