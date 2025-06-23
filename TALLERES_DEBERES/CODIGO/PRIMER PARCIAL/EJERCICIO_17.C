#include <stdio.h>

int main() {
int c;
        printf("Ejercicio 17: Pedir números hasta ingresar uno negativo\n");

    do {
        printf("Ingrese un número (negativo para terminar): ");
        scanf("%d", &c);

        if (c >= 0) {
            printf("Número ingresado: %d\n", c);
        }

    } while (c >= 0);

    printf("Número negativo ingresado. Fin del ejercicio.\n");
    return 0;
}
