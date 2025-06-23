#include <stdio.h>

int main() {
int nu;
    printf("Ejercicio 15: Determinar si un número es positivo, negativo o cero\n");
    printf("Ingrese el numero: ");
    scanf("%d", &nu);

    if (nu > 0) {
        printf("El numero es positivo\n");
    } else {
        if (nu < 0) {
            printf("El numero es negativo\n");
        } else {
            if (nu == 0) {
                printf("El numero es cero\n");
            }
        }
    }
    return 0;
}
