#include <stdio.h>

int main() {
    int N, i, j;
    int mat[100][100];
    int aux;


    printf("Ingrese el tamano N de la matriz NxN: ");      //Leer el tamaño de la matriz
    scanf("%d", &N);


    printf("Ingrese los elementos de la matriz:\n");
    for (int f = 0; f < N; f++) {
        for (int c = 0; c < N; c++) {                      //Almacenar valores del vector
            printf("Elemento [%d][%d]: ", f, c);
            scanf("%d", &mat[f][c]);
        }
    }


    printf("Ingrese el número de la fila i a intercambiar (0 a %d): ", N - 1);
    scanf("%d", &i);                                                                     //indices de la matriz
    printf("Ingrese el número de la fila j a intercambiar (0 a %d): ", N - 1);
    scanf("%d", &j);


    if (i >= 0 && i < N && j >= 0 && j < N) {
        for (int c = 0; c < N; c++) {                        //Validar y cambio de fila
            aux = mat[i][c];
            mat[i][c] = mat[j][c];
            mat[j][c] = aux;
        }


        printf("Matriz después de intercambiar filas %d y %d:\n", i, j);
        for (int f = 0; f < N; f++) {
            for (int c = 0; c < N; c++) {                                    //imprimir matriz resultante
                printf("%d ", mat[f][c]);
            }
            printf("\n");
        }
    } else {
        printf("Índices fuera de rango, no se realizó el intercambio.\n");
    }

    return 0;
}
