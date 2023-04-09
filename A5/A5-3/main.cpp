/*
LÓGICA Y PROGRAMACIÓN ESTRUCTURADA
Actividad 5 Ejercicio 3
JUAN CARLOS MORALES HERRERA     
*/
#include <iostream>

using namespace std;

const int MAX_ROWS = 5;
const int MAX_COLS = 5;

// función Limiar Pantalla
void limpiar_pantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


// function para llaner la matriz con lo que teclee el usuario
void fillMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Inserte el valor para la fila " << i+1 << ", columna " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

// function to print matrix
void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// function to add two matrices
void addMatrix(int matrix1[][MAX_COLS], int matrix2[][MAX_COLS], int sumMatrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int m, n;
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int sumMatrix[MAX_ROWS][MAX_COLS];

    // Definimos el tamaño de nuestras matrices:
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    
    // Llenamos la matriz A
    cout << "Ingrese los valores para la matriz A: " << endl;
    fillMatrix(matrix1, m, n);
    
    // Llenamos la matriz B
    cout << "Ingrese los valores para la matriz Bs: s" << endl;
    fillMatrix(matrix2, m, n);
    
    // add matrices
    addMatrix(matrix1, matrix2, sumMatrix, m, n);

    //Limpiamos la pantalla
    limpiar_pantalla();

    // print sumMatrix
    cout << "Matriz A:" << endl;
    printMatrix(matrix1, m, n);
    cout << "Matriz B:" << endl;
    printMatrix(matrix2, m, n);
    cout << endl;
    cout << "Matriz C = Matriz A + Matriz B: " << endl;
    printMatrix(sumMatrix, m, n);
    
    return 0;
}
