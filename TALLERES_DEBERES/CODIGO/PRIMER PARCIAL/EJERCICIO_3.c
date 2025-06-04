#include <stdio.h>

int main()
{
int num1,num2;
    printf("Ejercicio 3: Divisible\n");
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    
    if(num2==0){
        printf("No se puede dividir entre 0.\n");
    } else {
        if (num1%num2==0){
            printf("%d Es divisible por %d.\n" ,num1,num2);
        } else {
            printf("%d No es divisible por %d. \n", num1,num2);
        }
    }
    return 0;
}
