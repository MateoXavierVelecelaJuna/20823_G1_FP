#include <stdio.h>

int main()
{
float z;   
    printf("Ejercicio 4: Intervalo\n");
    printf("Ingresa un numero real: ");
    scanf("%f", &z);
    if (z>0 && z<=10){
        printf("El número SI pertenece al intervalo (0,10]");
    } else{
        printf("El número NO pertenece al intervalo (0,10]");
    }
    return 0;
}
