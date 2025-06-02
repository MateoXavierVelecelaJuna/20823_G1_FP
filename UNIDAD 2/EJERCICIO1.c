#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, intento_usuario;

    srand(time(NULL));
    numero_secreto = rand() % 100 + 1;

    for (int i = 1; i <= 5; i++) {
        printf("Intento %d/5: Adivina el numero (1-100): ", i);
        scanf("%d", &intento_usuario);

        if (intento_usuario < numero_secreto) {
            printf("El numero es mas alto>:v\n");
        } else if (intento_usuario > numero_secreto) {
            printf("El numero es mas bajo>:'v\n");
        } else {
            printf("¡Correcto! Adivinaste el numero:D\n");
            break;
        }
    }

    if (intento_usuario != numero_secreto) {
        printf("Lo siento, no adivinaste. El numero era %d.\n", numero_secreto);
    }

    return 0;
}
