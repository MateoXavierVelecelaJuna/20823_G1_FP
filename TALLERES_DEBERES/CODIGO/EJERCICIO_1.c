#include <stdio.h>

int main()
{
float a, b, res; 
    printf("Ejercicio 1: Media de dos valores\n");
    printf("Ingrese el Primer Número: ");
    scanf("%f", &a);

    printf("Ingrese el Segundo Número: ");
    scanf("%f", &b);

    res=(a+b)/2;

    printf("La media es: %.2f\n", res);
    return 0;
}