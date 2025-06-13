//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 4; U2 T1
//ORDEN ITERATIVO (DE MAYOR A MENOR)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[10]={23,5,78,12,9,34,67,42,3,19};
    int i, j, temp, n=10;
    printf("Vector original:\n");
    for(int i=1; i<n; i++){
        printf("%d ", vector[i]);
    }
    printf("\n");

    for(i=0; i< n-1; i++){
        for(j= i+1; j<n; j++){
            if (vector[i]< vector[j]){
                temp=vector[i];
                vector[i]=vector[j];
                vector[j]=temp;
            }
        }
    }

    printf("Vector Ordenado (mayor a menor): \n");
    for(i=0;i<n;i++){
        printf("%d ", vector[i]);
    }

    return 0;
}
