#include <stdio.h>

int main()
{
 int numero, horas, minutos, dias, y;
    printf("Ejercicio 5: Conversión de Unidades\n");
    printf("Ingrese un valor en segundos: ");
    scanf("%i", &numero);

    dias=numero/86400;
    y= numero %86400;

    horas=y/3600;
    y=y%3600;

    minutos=y/60;
    y= y % 60;

    printf(" %d Dias, %d Horas, %d Minutos, %d Segundos \n", dias,horas,minutos,y);

    return 0;
}
