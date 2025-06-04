//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 3; U2 T1
//FACTORIAL DE NUMEROS NATURALES

#include <stdio.h>
#include <stdlib.h>

int main (){

    int vec[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    unsigned long int fact[15];

    for(int i=0; i<15; i++ ){
        fact[i]=1;
        for (int j=1; j<=vec[i]; j++){
            fact[i]= fact[i]*j ;
        }
    }

    printf("Vector en factoriales: \n");
    for(int i=0; i<15; i++){
        printf("%d! = %llu\n", vec[i], fact[i]);
    }
    return 0;
}
