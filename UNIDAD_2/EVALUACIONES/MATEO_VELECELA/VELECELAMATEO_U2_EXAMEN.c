#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max, totalIntentos;
    int numeroSecreto;
    int gano = 0;

    // R.F.1:DEFINIR EL RANGO
    printf("Ingrese el valor mínimo del rango: ");
    scanf("%d", &min);
    printf("Ingrese el valor máximo del rango: ");
    scanf("%d", &max);

    while (min >= max) {
        printf("Error: el mínimo debe ser menor que el máximo. Intente de nuevo.\n");
        printf("Ingrese el valor mínimo del rango: ");
        scanf("%d", &min);
        printf("Ingrese el valor máximo del rango: ");
        scanf("%d", &max);
    }

    //
    srand(time(NULL));
    numeroSecreto = rand() % (max - min + 1) + min;

    // R.F.2: ELEGIR EL NUMERO DE INTENTOS
    printf("Ingrese el número de intentos (máximo 10): ");
    scanf("%d", &totalIntentos);
    while (totalIntentos < 1 || totalIntentos > 10) {
        printf("Error: ingrese entre 1 y 10 intentos: ");
        scanf("%d", &totalIntentos);
    }

    int intentos[10][3];

    for (int i = 0; i < totalIntentos; i++) {
        int intento;
        int esDuplicado = 0;

        do {
            printf("Intento %d - Ingresa un número entre %d y %d: ", i + 1, min, max);
            scanf("%d", &intento);

            // R.F.3:ALMACENAR INTENTO Y QUE NO SE REPITA
            if (intento < min || intento > max) {
                printf("Error: número fuera de rango.\n");
                continue;
            }

            esDuplicado = 0;
            for (int j = 0; j < i; j++) {
                if (intentos[j][1] == intento) {
                    esDuplicado = 1;
                    break;
                }
            }

            if (esDuplicado) {
                printf("Error: ya ingresaste ese número. Intenta con otro distinto.\n");
            }

        } while (intento < min || intento > max || esDuplicado);

        intentos[i][0] = i + 1;
        intentos[i][1] = intento;
        // R.F.4: ALMACENAR EN MATRIZ EL INTENTO, VALOR Y RESULTADO
        if (intento == numeroSecreto) {
            printf("¡Adivinaste el número!\n");
            printf("Mensaje secreto: 123456789\n");
            intentos[i][2] = 2;
            gano = 1;
            break;
        } else if (intento < numeroSecreto) {
            printf("Muy bajo.\n");
            intentos[i][2] = 0;
        } else {
            printf("Muy alto.\n");
            intentos[i][2] = 1;
        }
    }

    // R.F.5:MOSTRAR RESUMEN DETALLADO
    printf("\nResumen del juego:\n");
    printf("%-10s %-15s %-15s\n", "Intento", "Valor", "Resultado");

    for (int i = 0; i < totalIntentos; i++) {
        if (intentos[i][1] == 0 && intentos[i][2] == 0) break;
        printf("%-10d %-15d ", intentos[i][0], intentos[i][1]);

        if (intentos[i][2] == 0) {
            printf("%-15s\n", "Muy bajo");
        } else if (intentos[i][2] == 1) {
            printf("%-15s\n", "Muy alto");
        } else if (intentos[i][2] == 2) {
            printf("%-15s\n", "Correcto");
        }
    }

    if (!gano) {
        printf("\nNo lograste adivinar el número. El número secreto era: %d\n", numeroSecreto);
    }

    return 0;
}


