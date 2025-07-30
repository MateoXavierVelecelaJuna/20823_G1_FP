#include <stdio.h>

int main() {
int c;
        printf("Ejercicio 17: Pedir numeros hasta ingresar uno negativo\n");

    do {
        printf("Ingrese un numero (negativo para terminar): ");
        scanf("%d", &c);

        if (c >= 0) {
            printf("Numero ingresado: %d\n", c);
        }

    } while (c >= 0);

    printf("Número negativo ingresado. Fin del ejercicio.\n");
    return 0;
}
