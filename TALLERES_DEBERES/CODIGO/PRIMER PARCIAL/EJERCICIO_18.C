#include <stdio.h>

int main() {
 printf("Ejercicio 18: Mostrar los números pares del 1 al 10\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
