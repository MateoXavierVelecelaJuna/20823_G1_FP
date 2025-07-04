#include <stdio.h>

int esPrimo(int n); 
int main() {
// Declaración


    int b, u;

    printf("Ejercicio 9: Números primos comprendidos entre dos numeros dados\n");
    printf("Ingrese el primer número: ");
    scanf("%d", &b);
    printf("Ingrese el segundo número: ");
    scanf("%d", &u);

    printf("Números primos entre %d y %d:\n", b, u);

    for (int k = b + 1; k < u; k++) {
        if (esPrimo(k)) {
            printf("%d ", k);
        }
    }
}
int esPrimo(int n) {
    if (n <= 1) return 0;

    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0)
            return 0;
    }

    return 1;

    return 0;
}
