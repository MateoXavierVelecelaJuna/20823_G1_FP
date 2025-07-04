#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_INTENTOS 10
int main() {
    int min, max, nse;
    int inmax, in = 0;
    int inac;
    int matriz_intentos[MAX_INTENTOS][3];
    int usado[MAX_INTENTOS * 2];
    int aux = 0;
    int adi = 0;
    srand(time(NULL));
    // RF01 - Configuracion del rango
    printf("Ingrese el rango minimo del numero secreto: ");
    scanf("%d", &min);
    printf("Ingrese el rango maximo del numero secreto: ");
    scanf("%d", &max);

    if (min >= max) {
        printf("Rango invalido. El minimo debe ser menor que el maximo.\n");
        return 1;
    }
    // RF02 - Numero maximo de intentos
    do {
        printf("Ingrese el numero maximo de intentos (hasta 10): ");
        scanf("%d", &inmax);
    } while (inmax < 1 || inmax > 10);
    nse = min + rand() % (max - min + 1);
    while (in < inmax) {
        int duplicado = 0;

        printf("\nIntento %d: Ingrese un numero entre %d y %d: ", in + 1, min, max);
        scanf("%d", &inac);

        // RF03 - Validacion de rango
        if (inac < min || inac > max) {
            printf("Numero fuera del rango. Intente nuevamente.\n");
            continue;
        }
        // RF03 - Validacion de duplicados
        for (int i = 0; i < aux; i++) {
            if (usado[i] == inac) {
                duplicado = 1;
                break;
            }
        }
        if (duplicado) {
            printf("Ya ingreso ese numero. Intente uno diferente.\n");
            continue;
        }

        usado[aux++] = inac;

        // RF04 - Registro en matriz
        matriz_intentos[in][0] = inac;
        matriz_intentos[in][2] = in + 1;

        if (inac == nse) {
            matriz_intentos[in][1] = 2;
            adi = 1;
            break;
        } else if (inac < nse) {
            matriz_intentos[in][1] = 0;
            printf("Muy bajo.\n");
        } else {
            matriz_intentos[in][1] = 1;
            printf("Muy alto.\n");
        }
        in++;
    }
    // RF05 - Visualizacion de resumen
    printf("\nResumen de intentos:\n");
    printf("Intento\tNumero\tResultado\n");
    for (int i = 0; i <= in; i++) {
        printf("%d\t%d\t", matriz_intentos[i][2], matriz_intentos[i][0]);
        switch (matriz_intentos[i][1]) {
            case 0: printf("Muy bajo\n"); break;
            case 1: printf("Muy alto\n"); break;
            case 2: printf("Correcto\n"); break;
        }
    }
    if (adi) {
        printf("\nFelicidades, adivinaste el numero secreto.\n");
    } else {
        printf("\nNo lograste adivinar el numero secreto. Era: %d\n", nse);
    }
    return 0;
}
