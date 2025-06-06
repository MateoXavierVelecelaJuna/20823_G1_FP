#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[10][10];
    int i, j;
    int suma=0;       //Inicializamos suma en 0
    int intento;

    for (i = 0; i < 10; i++) {               //for para ingreso de valores
        for (j = 0; j < 10; j++) {
            printf("Ingresar componentes de la matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);           //Almacenamos sus valores dependiendo la posicion
        }
    }


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            suma = suma + matriz[i][j];            //for para la suma acumulada de todos los elementos
        }
    }

    printf("Cual crees que es la suma total de los elementos? ");   //Imprimimos adivinanza
    scanf("%d", &intento);

    if (intento == suma) {
        printf("Correcto, adivinaste la suma.\n");
    } else {
        printf("Esa no es la suma, la suma correcta era: %d\n", suma);
    }


    return 0;

}
