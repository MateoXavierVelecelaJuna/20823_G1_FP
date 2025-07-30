#include <stdio.h>

int main() {
 float nur, sum = 0;
    int p;

    printf("Ejercicio 20: Calcular el promedio de 5 números ingresados\n");

    for (p = 1; p <= 5; p++) {
        printf("Ingrese el numero %d: ", p);
        scanf("%f", &nur);
        sum += nur;
    }

    float promedio = sum / 5;
    printf("El promedio de los 5 números es: %.2f\n", promedio);

    return 0;
}
