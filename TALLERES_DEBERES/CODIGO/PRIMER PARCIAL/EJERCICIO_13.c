#include <stdio.h>

int main() {
    float nota;
    printf("Ejercicio 13: Validar ingreso de nota entre el 0 y el 10\n");
    do {
        printf("Ingrese una nota entre 0 y 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("¡Nota inválida! Debe estar entre 0 y 10.\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota válida ingresada: %.2f\n", nota);
    return 0;
}
