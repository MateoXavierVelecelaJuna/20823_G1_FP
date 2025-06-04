#include <stdio.h>

int main() {
 int numero1;
    printf("Ejercicio 12: Calcular si un número es par o impar\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &numero1);

    // IF COMPUESTO: if + else
    if (numero1 % 2 == 0) {
        printf("El número %d es PAR.\n", numero1);
    } else {
        printf("El número %d es IMPAR.\n", numero1);
    }
    return 0;
}
