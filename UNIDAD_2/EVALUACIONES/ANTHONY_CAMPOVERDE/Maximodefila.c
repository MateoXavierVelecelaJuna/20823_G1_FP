//UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//NOMBRE: ANTHONY CAMPOVERDE
//CODIGO: MAXIMO DE UNA FILA
//FECHA: 11/06/2025
//EVALUACION 2

#include <stdio.h>
#define MAX 10                                 //PONGO UN LIMITE MAXIMO DE 10 PARA QUE EL PROGRAMA O CODIGO NO SE SATURE SI USUARIO INGRESA VALORES PARA MATRIZ MUY ALTOS

int main(){

    int N, M, fila, i, j, maximo;
    int matriz[MAX][MAX];


    do {
        printf("Ingrese el tamano fila de la matriz (entre 1 y 10): ");
        scanf("%d", &N);

        if (N <= 0 || N > 10) {
            printf("Error: Fila debe estar entre 1 y 10, intente nuevamente.\n");       //VALIDAMOS PARA EVITAR O TRATAR DE EVITAR SATURACION EN LA MEMORIA
        }

    } while (N <= 0 || N > 10);

    do {
        printf("Ingrese el tamano columna de la matriz (entre 1 y 10): ");
        scanf("%d", &M);

        if (M <= 0 || M > 10) {
            printf("Error: N debe estar entre 1 y 10, intente nuevamente.\n");
        }

    } while (M <= 0 || M > 10);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Ingrese componente de la matriz [%d][%d]: ", i, j);   //INGRESO DE COMPONENTES DE LA MATRIZ  RF1
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Ingrese el numero de fila (entre 1 y %d) para buscar el maximo: ", N);    //PEDIMOS EL NUMERO DE FILA PARA CALCULAR EL MAYOR RF2
    scanf("%d", &fila);


    while (fila < 1 || fila > N) {
        printf("Fila fuera de rango, intente nuevamente: ");   //VALIDAMOS FILA
        scanf("%d", &fila);
    }

    fila = fila - 1;    //AJUSTAMOS INDICE DE FILA

    maximo = matriz[fila][0];   //CALCULO DEL VALOR MAXIMO EN LA FILA RF3

    for (j = 1; j < N; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }


     printf("El valor maximo en la fila %d es: %d\n", fila + 1, maximo);  //IMPRIMIMOS EL VALOR AJUSTADO NUEVAMENTE CON EL INDICE ANTERIORMENTE AJUSTADO

  return 0;

}























