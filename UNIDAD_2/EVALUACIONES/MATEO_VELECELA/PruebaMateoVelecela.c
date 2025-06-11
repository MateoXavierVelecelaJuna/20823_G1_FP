#include <stdio.h>

int main(){

    int N, M, fila, i, j, maximo;
    int matriz[10][10]; //Para que la matriz no sea muy grando agregamos un valor maximo de filas y columnas de 10*10


    do {
        printf("Ingrese el numero de filas de la matriz (entre 1 y 10): ");
        scanf("%d", &N);

        if (N <= 0 || N > 10) {
            printf("Error la fila debe estar entre 1 y 10, intente nuevamente.\n");      //Para cuando el usuario se pase del limite de tamaño de matriz en filas
        }

    } while (N <= 0 || N > 10);

    do {
        printf("Ingrese el numero de columnas de la matriz (entre 1 y 10): ");       // Tamaño de la matriz en columnas
        scanf("%d", &N);

        if (M <= 0 || N > 10) {
            printf("Error N debe estar entre 1 y 10, intente nuevamente.\n");
        }

    } while (N <= 0 || N > 10);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Ingrese componente de la matriz [%d][%d]: ", i, j);   //RF1:Para que el programa sea capaz de leer una matriz de numeros enteros
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Ingrese el numero de fila (entre 1 y %d) para buscar el maximo: ", N);   // RF2:pedimos al usuario que ingrese un numero de fila
    scanf("%d", &fila);


    while (fila < 1 || fila > N) {
        printf("Fila fuera de rango intente nuevamente: ");
        scanf("%d", &fila);
    }

    fila = fila - 1;   //En c se utiliza el n-1 para matrices

    maximo = matriz[fila][0];   //  RF3: Identificamos el valor maximo

    for (j = 1; j < N; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }


     printf("El valor maximo en la fila %d es: %d\n", fila + 1, maximo);  //RF3: Mostramos el valor maxiom

  return 0;

}
