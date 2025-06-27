#include <stdio.h>

#define MAX 10  // Tamaño máximo permitido

// Declaraciones de funciones
void leerMatriz(int mat[MAX][MAX], int n);
void mostrarMatriz(int mat[MAX][MAX], int n);
void mostrarMatrizInversa(int mat[MAX][MAX], int n);

int main() {
    int mat[MAX][MAX];
    int n;

    // Pedir el tamaño de la matriz (hasta 10)
    do {
        printf("Ingrese el tamaño de la matriz NxN (máximo %d): ", MAX);
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Tamaño no válido. Intente de nuevo.\n");
        }
    } while (n <= 0 || n > MAX);

    // Leer matriz
    leerMatriz(mat, n);

    // Mostrar matriz original
    printf("\nMatriz original:\n");
    mostrarMatriz(mat, n);

    // Mostrar matriz en orden inverso
    printf("\nMatriz en sentido inverso:\n");
    mostrarMatrizInversa(mat, n);

    return 0;  // Fin del programa
}

// Función para leer la matriz
void leerMatriz(int mat[MAX][MAX], int n) {
    printf("Ingrese los elementos de la matriz %dx%d:\n", n, n);
    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            printf("mat[%d][%d]: ", fila, col);
            scanf("%d", &mat[fila][col]);
        }
    }
}

// Función para mostrar la matriz original
void mostrarMatriz(int mat[MAX][MAX], int n) {
    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            printf("%d\t", mat[fila][col]);
        }
        printf("\n");
    }
}

// Función para mostrar la matriz en sentido inverso
void mostrarMatrizInversa(int mat[MAX][MAX], int n) {
    for (int fila = n - 1; fila >= 0; fila--) {
        for (int col = n - 1; col >= 0; col--) {
            printf("%d\t", mat[fila][col]);
        }
        printf("\n");
    }
}
