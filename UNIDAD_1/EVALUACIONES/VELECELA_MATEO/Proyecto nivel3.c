#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos
int generarNumeroSecreto(int min, int max);
int esDuplicado(int intentos[][3], int actual, int valor);
void mostrarResumen(int intentos[][3], int totalIntentos, int numeroSecreto, int gano);

int main() {
    int min, max, totalIntentos;
    int numeroSecreto;
    int gano = 0;

    // RF01 – Configuración dinámica del rango
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

    // RF02 – Configuración dinámica de intentos
    printf("Ingrese el número de intentos (máximo 10): ");
    scanf("%d", &totalIntentos);
    while (totalIntentos < 1 || totalIntentos > 10) {
        printf("Error: ingrese entre 1 y 10 intentos: ");
        scanf("%d", &totalIntentos);
    }

    // RF01 – Generar número secreto
    srand(time(NULL));
    numeroSecreto = generarNumeroSecreto(min, max);

    // RF04 – Registro de intentos en matriz: [intento][0=pos, 1=valor, 2=resultado]
    int intentos[10][3];

    for (int i = 0; i < totalIntentos; i++) {
        int intento;
        do {
            printf("Intento %d - Ingresa un número entre %d y %d: ", i + 1, min, max);
            scanf("%d", &intento);

            if (intento < min || intento > max) {
                printf("Error: número fuera de rango.\n");
            } else if (esDuplicado(intentos, i, intento)) {
                printf("Error: ya ingresaste ese número. Intenta con otro distinto.\n");
                intento = min - 1; // fuerza que el bucle repita
            } else {
                break; // válido
            }
        } while (1);

        intentos[i][0] = i + 1;       // número de intento
        intentos[i][1] = intento;     // valor ingresado

        if (intento == numeroSecreto) {
            printf("¡Adivinaste el número!\n");
            printf("Mensaje secreto: 123456789\n");
            intentos[i][2] = 2;       // correcto
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

    // RF05 – Mostrar resumen detallado
    mostrarResumen(intentos, totalIntentos, numeroSecreto, gano);

    return 0;
}

// RF01 - Genera número secreto entre min y max
int generarNumeroSecreto(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// RF03 - Verifica si un número ya fue intentado antes
int esDuplicado(int intentos[][3], int actual, int valor) {
    for (int i = 0; i < actual; i++) {
        if (intentos[i][1] == valor) {
            return 1;
        }
    }
    return 0;
}

// RF05 - Muestra tabla resumen detallada
void mostrarResumen(int intentos[][3], int totalIntentos, int numeroSecreto, int gano) {
    printf("\nResumen del juego:\n");
    printf("%-10s %-15s %-15s\n", "Intento", "Valor", "Resultado");

    for (int i = 0; i < totalIntentos; i++) {
        if (intentos[i][1] == 0 && intentos[i][2] == 0) break; // si no se usaron todos los intentos
        printf("%-10d %-15d ", intentos[i][0], intentos[i][1]);

        switch (intentos[i][2]) {
            case 0:
                printf("%-15s\n", "Muy bajo");
                break;
            case 1:
                printf("%-15s\n", "Muy alto");
                break;
            case 2:
                printf("%-15s\n", "Correcto");
                break;
        }
    }

    if (!gano) {
        printf("\nNo lograste adivinar el número. El número secreto era: %d\n", numeroSecreto);
    }
}

