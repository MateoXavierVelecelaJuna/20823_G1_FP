#include <stdio.h>

int main() {
    int N, fila, i, j, maximo;
    int matriz[10][10];

    // Validar N
    do {
        printf("Ingrese el tama�o N de la matriz NxN (entre 1 y 10): ");
        scanf("%d", &N);

        if (N <= 0 || N > 10) {
            printf("Error: N debe estar entre 1 y 10. Intente nuevamente.\n");
        }

    } while (N <= 0 || N > 10);

    // Ingreso de valores de la matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Ingrese componente de la matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Pedir n�mero de fila
    printf("Ingrese el n�mero de fila (entre 1 y %d) para buscar el m�ximo: ", N);
    scanf("%d", &fila);

    // Validar fila
    while (fila < 1 || fila > N) {
        printf("Fila fuera de rango. Intente nuevamente: ");
        scanf("%d", &fila);
    }

    // Ajustar �ndice de fila (porque el usuario usa 1 a N, pero C usa 0 a N-1)
    fila = fila - 1;

    // Buscar el m�ximo en esa fila
    maximo = matriz[fila][0];
    for (j = 1; j < N; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }

    // Mostrar resultado
    printf("El valor m�ximo en la fila %d es: %d\n", fila + 1, maximo);

    return 0;
}
