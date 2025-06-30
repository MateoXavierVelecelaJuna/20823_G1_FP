/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
NOMBRE: ANTHONY CAMPOVERDE
REQUISITOS FUNCIONALES NUMERO 2, EJEMPLO 2, EVALUACION 1

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int minimo, maximo, numeroSecreto;
    int intentos[10] = {0}; // Inicializar todo en 0
    int totalIntentos, intento, gano = 0;

    // RF01 � Configuraci�n del rango
    printf("Ingresa el valor minimo del rango: ");
    scanf("%d", &minimo);
    printf("Ingresa el valor maximo del rango: ");
    scanf("%d", &maximo);

    // Validaci�n de rango m�nimo/m�ximo
    if (minimo >= maximo) {
        printf("El minimo debe ser menor que el m�ximo, programa terminado.\n");
        return 1;
    }

    // RF02 � Configuraci�n del n�mero de intentos (m�ximo 10)
    do {
        printf("�Cuantos intentos quieres usar? (maximo 10): ");
        scanf("%d", &totalIntentos);
    } while (totalIntentos < 1 || totalIntentos > 10);

    // Inicializar n�mero aleatorio dentro del rango
    srand(time(NULL));
    numeroSecreto = (rand() % (maximo - minimo + 1)) + minimo;

    // RF03, RF04 � Juego
    for (int i = 0; i < totalIntentos; i++) {
        do {
            printf("Intento %d: Ingresa un numero entre %d y %d: ", i + 1, minimo, maximo);
            scanf("%d", &intento);

            if (intento < minimo || intento > maximo) {
                printf("Numero fuera del rango, Intenta nuevamente.\n");
            }
        } while (intento < minimo || intento > maximo);

        intentos[i] = intento; // RF04

        if (intento == numeroSecreto) {
            printf("Correcto, Adivinaste el n�mero.\n");
            gano = 1;
            break;
        } else if (intento < numeroSecreto) {
            printf("Muy bajo.\n");
        } else {
            printf("Muy alto.\n");
        }
    }

    // RF05 � Mostrar resumen
    printf("\n RESUMEN DEL JUEGO\n");
    for (int i = 0; i < totalIntentos; i++) {
        printf("Intento %d: %d\n", i + 1, intentos[i]);
    }

    printf("Numero secreto: %d\n", numeroSecreto);

    if (!gano) {
        printf("No lograste adivinar el numero.\n");
    } else {
        printf("Felicidades por adivinar el numero\n");
    }

    return 0;
}
