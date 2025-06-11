//Universidad de las fuerzas armadas ESPE
//11/06/2025
//Alexander Alvear
//Evaluacion 2
#include <stdio.h>

int main(){

    int F, C, fila, i, j, maximo;
    int matriz[100][100];


    do {
        printf("Ingrese el tamano fila de la matriz (entre 1 y 100): ");
        scanf("%d", &F);

        if (F <= 0 || F > 100) {
            printf("Error: Fila debe estar entre 1 y 100, intente nuevamente.\n");       //VALIDAMOS PARA TRATAR DE EVITAR SATURACION EN LA MEMORIA
        }

    } while (F <= 0 || F > 100);

    do {
        printf("Ingrese el tamano columna de la matriz (entre 1 y 100): ");
        scanf("%d", &C);

        if (C <= 0 || C > 100) {
            printf("Error: N debe estar entre 1 y 10, intente nuevamente.\n");
        }

    } while (C <= 0 || C > 100);

    for (i = 0; i < F; i++) {
        for (j = 0; j < C; j++) {
            printf("Ingrese componente de la matriz [%d][%d]: ", i, j);   //INGRESO DE LOS COMPONENTES DE LA MATRIZ

            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Ingrese el numero de fila (entre 1 y %d) para buscar el maximo: ", F);    //PEDIMOS EL NUMERO DE FILA PARA CALCULAR EL MAYOR 
    scanf("%d", &fila);


    while (fila < 1 || fila > F) {
        printf("Fila fuera de rango, intente nuevamente: ");   
        scanf("%d", &fila);
    }

    fila = fila - 1;    

    maximo = matriz[fila][0];   //CALCULO DEL VALOR MAXIMO EN LA FILA 

    for (j = 1; j < F; j++) {
        if (matriz[fila][j] > maximo) {
            maximo = matriz[fila][j];
        }
    }


     printf("El valor maximo en la fila %d es: %d\n", fila + 1, maximo);  //IMPRIMIMOS EL VALOR

  return 0;

}
