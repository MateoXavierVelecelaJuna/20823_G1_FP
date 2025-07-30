#include <stdio.h>

int main() {
int nu;
    printf("Ejercicio 15: Determinar si un numero es positivo, negativo o cero\n");
    printf("Ingrese el numero: ");
    scanf("%d", &nu);

    if (nu > 0) {
        printf("El numero sera positivo\n");
    } else {
        if (nu < 0) {
            printf("El numero sera negativo\n");
        } else {
            if (nu == 0) {
                printf("El numero sera cero\n");
            }
        }
    }
    return 0;
}
