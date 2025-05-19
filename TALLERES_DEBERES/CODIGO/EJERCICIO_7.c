#include <stdio.h>

int main()
{
float altura, suma=0, max, min; 
    int contador=0;
    printf("Ejercicio 7: Máximo, mínimo y media de alturas \n");
    printf("Ingrese alturas positivas (para terminar ingrese un número negativo)\n");
    while (1) {
        printf("Altura %d: ", contador + 1);
        scanf("%f", &altura);

        if (altura < 0)
            break;

        // Si es la primera altura, inicializamos min y max
        if (contador == 0) {
            max = min = altura;
        } else {
            if (altura > max) max = altura;
            if (altura < min) min = altura;
        }

        suma += altura;
        contador++;
    }

    if (contador == 0) {
        printf("No se ingresaron alturas válidas.\n");
    } else {
        float media = suma / contador;
        printf("\nCantidad de alturas: %d\n", contador);
        printf("Altura media: %.2f\n", media);
        printf("Altura máxima: %.2f\n", max);
        printf("Altura mínima: %.2f\n", min);
    }
    return 0;
}