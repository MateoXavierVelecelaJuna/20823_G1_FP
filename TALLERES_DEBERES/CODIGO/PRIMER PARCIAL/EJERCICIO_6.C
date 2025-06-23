#include <stdio.h>

int main()
{
float var1,var2,var3,exe;
    printf("Ejercicio 6: Media de numeros positivos\n");
    printf("Ingrese primer número positivo: ");
    scanf("%f", &var1);
    printf("Ingrese segundo número positivo: ");
    scanf("%f", &var2);
    printf("Ingrese tercer número positivo: ");
    scanf("%f", &var3);

    exe=(var1+var2+var3)/3;
    printf("La media aritmética de los números ingresados es: %.2f ", exe);

    return 0;
}
