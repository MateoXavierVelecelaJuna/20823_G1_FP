#include <stdio.h>

int main() {
    int N, i, j, fila_i, fila_j, aux;

    int matriz[10][10]; // Matriz máxima 10x10

    // Solicitar tamaño de la matriz
    printf("Ingrese el tamaño N de la matriz cuadrada (N x N, máximo 10): ");
    scanf("%d", &N);

    // Validar tamaño
    if (N <= 0 || N > 10) {
        printf("Tamaño inválido. Debe ser entre 1 y 10.\n");
        return 1; // Salir con error
    }

    // Llenar matriz con valores secuenciales
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

    // Solicitar filas a intercambiar
    printf("Ingrese las filas a intercambiar (i y j, entre 1 y %d): ", N);
    scanf("%d %d", &fila_i, &fila_j);

    // Validar filas (restar 1 para índices base 0)
    if (fila_i < 1 || fila_i > N || fila_j < 1 || fila_j > N) {
        printf("Error: Las filas deben estar entre 1 y %d.\n", N);
        return 1;
    }
    fila_i--; // Ajustar a índice base 0
    fila_j--;

    // Intercambiar filas
    for (j = 0; j < N; j++) {
        aux = matriz[fila_i][j];
        matriz[fila_i][j] = matriz[fila_j][j];
        matriz[fila_j][j] = aux;
    }

    // Mostrar matriz modificada
    printf("Matriz con filas %d y %d intercambiadas:\n", fila_i + 1, fila_j + 1);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
