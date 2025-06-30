//Universidad de las fuerzas armadas ESPE
//Alvear Alexander
//Evaluacion 2 Segundo parcial
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numsec;
    int intento;
    int gano = 0;
    int intentos[1][10] = {0}; // RQ2:matriz 1x10 para numero de intentos
    int min, max;

    srand(time(NULL));

    // RQ1:Pedir al usuario el rango mínimo y máximo
    printf("Define el rango minimo: ");
    scanf("%d", &min);
    printf("Define el rango maximo: ");
    scanf("%d", &max);

    // Validar que el rango sea correcto
    if (min >= max) {
        printf("Rango invalido. El minimo debe ser menor que el maximo.\n");
        return 1;
    }

    numsec = (rand() % (max - min + 1)) + min;

    for (int i = 0; i < 10; ) {
        printf("Intento %d: Ingresa un numero entre %d y %d: ", i + 1, min, max);
        scanf("%d", &intento);

        // RQ3:Validar que el intento esté dentro del rango definido
        if (intento < min || intento > max) {
            printf("Numero inválido, debe estar entre %d y %d.\n", min, max);
            continue;
        }

        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (intentos[0][j] == intento) {
                repetido = 1;
                break;
            }
        }
        if (repetido) {
            printf("Ya ingresaste ese numero, intenta con otro.\n");
            continue;
        }
         //RQ5:Tabla con cada intento realizado
        intentos[0][i] = intento;

        if (intento == numsec) {
            printf("¡Adivinaste el numero!Felicidades\n");
            printf("Mensaje secreto: Eres un genio\n");
            gano = 1;
            break;
        } else if (intento < numsec) { //RQ4: Valor ingresado bajo, medio o alto
            printf("Muy bajo.\n");
        } else {
            printf("Muy alto.\n");
        }

        i++;
    }

    printf("\nIntentos realizados:\n");
    for (int i = 0; i < 10; i++) {
        if (intentos[0][i] != 0) {
            printf("Intento %d: %d\n", i + 1, intentos[0][i]);
        }
    }

    if (!gano) {
        printf("No lograste adivinar el numero. El numero secreto era: %d\n", numsec);
    }

    return 0;
}
