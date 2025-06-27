#include <stdio.h>

#define MAX 10  // Tama�o m�ximo permitido

// Declaraciones de funciones
void leerMatriz(int mat[MAX][MAX], int n);
void mostrarMatriz(int mat[MAX][MAX], int n);
void mostrarMatrizInversa(int mat[MAX][MAX], int n);

int main() {
    int mat[MAX][MAX];
    int n;

    // Pedir el tama�o de la matriz (hasta 10)
    do {
        printf("Ingrese el tama�o de la matriz NxN (m�ximo %d): ", MAX);
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Tama�o no v�lido. Intente de nuevo.\n");
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

// Funci�n para leer la matriz
void leerMatriz(int mat[MAX][MAX], int n) {
    printf("Ingrese los elementos de la matriz %dx%d:\n", n, n);
    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            printf("mat[%d][%d]: ", fila, col);
            scanf("%d", &mat[fila][col]);
        }
    }
}

// Funci�n para mostrar la matriz original
void mostrarMatriz(int mat[MAX][MAX], int n) {
    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            printf("%d\t", mat[fila][col]);
        }
        printf("\n");
    }
}

// Funci�n para mostrar la matriz en sentido inverso
void mostrarMatrizInversa(int mat[MAX][MAX], int n) {
    for (int fila = n - 1; fila >= 0; fila--) {
        for (int col = n - 1; col >= 0; col--) {
            printf("%d\t", mat[fila][col]);
        }
        printf("\n");
    }
}
