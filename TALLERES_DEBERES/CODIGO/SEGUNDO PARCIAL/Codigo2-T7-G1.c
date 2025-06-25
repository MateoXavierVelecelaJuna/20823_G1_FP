#include <stdio.h>

#define MAX 10

// Prototipos de funciones
int leerTamanio();
void leerMatriz(int matriz[MAX][MAX], int N);
int leerFila(int N);
int buscarMaximoEnFila(int matriz[MAX][MAX], int N, int fila);
void mostrarResultado(int fila, int maximo);

int main() {
    int N, fila, maximo;
    int matriz[MAX][MAX];

    N = leerTamanio();                    // Leer tamaño de la matriz
    leerMatriz(matriz, N);               // Llenar la matriz
    fila = leerFila(N);                  // Leer número de fila (ajustado a índice C)
    maximo = buscarMaximoEnFila(matriz, N, fila);  // Buscar máximo
    mostrarResultado(fila, maximo);      // Mostrar resultado

    return 0;
}

// Función para leer el tamaño de la matriz
int leerTamanio() {
    int n;
    do {
        printf("Ingrese el tamaño N de la matriz NxN (entre 1 y %d): ", MAX);
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Error: N debe estar entre 1 y %d. Intente nuevamente.\n", MAX);
        }
    } while (n <= 0 || n > MAX);
    return n;
}

// Función para leer los valores de la matriz
void leerMatriz(int matriz[MAX][MAX], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Ingrese componente de la matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función para leer el número de fila, con ajuste a índice C
int leerFila(int N) {
    int fila;
    printf("Ingrese el número de fila (entre 1 y %d) para buscar el máximo: ", N);
    scanf("%d", &fila);
    while (fila < 1 || fila > N) {
        printf("Fila fuera de rango. Intente nuevamente: ");
        scanf("%d", &fila);
    }
    return fila - 1;  // Ajuste a índice de C (0 a N-1)
}

// Función para buscar el valor máximo en una fila específica
int buscarMaximoEnFila(int matriz[MAX][MAX], int N, int fila) {
    int maximo = matriz[fila][0];
    for (int j = 1; j < N; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }
    return maximo;
}

// Función para mostrar el resultado
void mostrarResultado(int fila, int maximo) {
    printf("El valor máximo en la fila %d es: %d\n", fila + 1, maximo);
}
