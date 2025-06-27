#include <stdio.h>

#define MAX 10

// Prototipos de funciones
int leerTamanio();
void llenarMatriz(int matriz[MAX][MAX], int N);
void mostrarMatriz(int matriz[MAX][MAX], int N);
void leerFilasAIntercambiar(int N, int *fila_i, int *fila_j);
void intercambiarFilas(int matriz[MAX][MAX], int N, int fila_i, int fila_j);

int main() {
    int N, fila_i, fila_j;
    int matriz[MAX][MAX];

    N = leerTamanio();                       // Leer tamaño de matriz
    llenarMatriz(matriz, N);                // Llenar matriz
    printf("Matriz original:\n");
    mostrarMatriz(matriz, N);               // Mostrar matriz original

    leerFilasAIntercambiar(N, &fila_i, &fila_j);   // Leer filas a intercambiar
    intercambiarFilas(matriz, N, fila_i, fila_j);  // Intercambiar filas

    printf("Matriz con filas %d y %d intercambiadas:\n", fila_i + 1, fila_j + 1);
    mostrarMatriz(matriz, N);               // Mostrar matriz modificada

    return 0;
}

// Función para leer tamaño de la matriz
int leerTamanio() {
    int n;
    printf("Ingrese el tamaño N de la matriz cuadrada (N x N, máximo %d): ", MAX);
    scanf("%d", &n);
    if (n <= 0 || n > MAX) {
        printf("Tamaño inválido. Debe ser entre 1 y %d.\n", MAX);
        return 1;
    }
    return n;
}

// Función para llenar la matriz con valores secuenciales
void llenarMatriz(int matriz[MAX][MAX], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = i * N + j + 1;
        }
    }
}

// Función para mostrar la matriz
void mostrarMatriz(int matriz[MAX][MAX], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para leer las filas que se desean intercambiar
void leerFilasAIntercambiar(int N, int *fila_i, int *fila_j) {
    printf("Ingrese las filas a intercambiar (i y j, entre 1 y %d): ", N);
    scanf("%d %d", fila_i, fila_j);

    if (*fila_i < 1 || *fila_i > N || *fila_j < 1 || *fila_j > N) {
        printf("Error: Las filas deben estar entre 1 y %d.\n", N);
        return;
    }

    (*fila_i)--; // Ajustar a índice base 0
    (*fila_j)--;
}

// Función para intercambiar dos filas de la matriz
void intercambiarFilas(int matriz[MAX][MAX], int N, int fila_i, int fila_j) {
    int aux;
    for (int j = 0; j < N; j++) {
        aux = matriz[fila_i][j];
        matriz[fila_i][j] = matriz[fila_j][j];
        matriz[fila_j][j] = aux;
    }
}
