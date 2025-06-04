#include <stdio.h>
#include <stdlib.h>

int main() {
    float vec[10];
    float norma = 0.0;
    int i;

    printf("Ingresa componentes del vector:\n");

    for (i = 0; i < 10; i++) {
        printf("Ingresa el componente para la posicion %d: ", i);
        scanf("%f", &vec[i]);
    }

    for (i = 0; i < 10; i++) {
       norma = norma + vec[i] * vec[i];
    }

    printf("Los valores del vector son:\n");
    for (i = 0; i < 10; i++) {
        printf("vector[%d] = %.2f\n", i, vec[i]);
    }

    printf("La norma (suma de cuadrados) es: %.2f\n", norma);

    return 0;
}


