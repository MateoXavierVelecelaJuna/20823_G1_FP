#include <stdio.h>
#include <math.h>
int main()
{
float num, resultado;
    printf("Ejercicio 2: Valor absoluto de X al cubo\n");
    printf("Ingrese un número real X: ");
    scanf("%f", &num);

    float cubo= num*num*num;
    resultado=fabs(cubo);
    return 0;
}
