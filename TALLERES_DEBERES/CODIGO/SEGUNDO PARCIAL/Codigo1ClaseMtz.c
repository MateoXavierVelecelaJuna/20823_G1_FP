#include <stdio.h>

int main() {
    int N, i, j;
    int matriz[10][10];  // Tamaño máximo de 10x10

    // Solicitar tamaño de la matriz
    printf("Ingrese el tamaño N de la matriz cuadrada (N x N, máximo 10): ");
    scanf("%d", &N);

    // Validar tamaño
    if (N <= 0 || N > 10) {
        printf("Tamaño inválido. Debe ser entre 1 y 10.\n");
        return 1; // Terminar el programa con error
    }

    // Llenar la matriz con valores de ejemplo
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = i * N + j + 1;
        }
    }

    // Mostrar matriz original
    printf("Matriz original:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar matriz en orden inverso
    printf("Matriz en orden inverso:\n");
    for (i = N - 1; i >= 0; i--) {
        for (j = N - 1; j >= 0; j--) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
