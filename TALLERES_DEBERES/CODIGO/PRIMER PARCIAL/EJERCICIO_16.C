#include <stdio.h>

int main() {
 int su = 0;
    printf("Ejercicio 16: Suma de los primeros 10 numeros naturales\n");
    for (int nu = 1; nu <= 10; nu++) {
        su += nu;
    }

    printf("La suma de los 10 primeros numeros naturales es: %d\n", su);
    return 0;
}
