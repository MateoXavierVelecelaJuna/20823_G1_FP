#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos
int generarNumeroSecreto(int min, int max);
int obtenerIntento(int intentoNum, int min, int max);
void mostrarResumen(int intentos[], int totalIntentos, int numeroSecreto, int gano);

int main() {
    int min, max, totalIntentos;
    int numeroSecreto;
    int gano = 0;

    // RF01 - Configuración del rango
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

    // RF02 - Configuración del número de intentos
    printf("Ingrese el número de intentos (máximo 10): ");
    scanf("%d", &totalIntentos);
    while (totalIntentos < 1 || totalIntentos > 10) {
        printf("Error: número de intentos inválido. Ingrese entre 1 y 10: ");
        scanf("%d", &totalIntentos);
    }

    // RF01 - Generar número secreto
    srand(time(NULL));
    numeroSecreto = generarNumeroSecreto(min, max);

    // RF04 - Registro de intentos en un vector
    int intentos[10]; // máximo 10

    for (int i = 0; i < totalIntentos; i++) {
        intentos[i] = obtenerIntento(i + 1, min, max); // RF03

        if (intentos[i] == numeroSecreto) {
            printf("¡Adivinaste el número!\n");
            printf("Mensaje secreto: 123456789\n");
            gano = 1;
            break;
        } else if (intentos[i] < numeroSecreto) {
            printf("Muy bajo.\n");
        } else {
            printf("Muy alto.\n");
        }
    }

    // RF05 - Visualización de resultados
    mostrarResumen(intentos, totalIntentos, numeroSecreto, gano);

    return 0;
}

// Genera un número secreto entre min y max
int generarNumeroSecreto(int min, int max) {
    return rand() % (max - min + 1);
}

// Solicita un intento validando el rango
int obtenerIntento(int intentoNum, int min, int max) {
    int intento;
    do {
        printf("Intento %d - Ingresa un número entre %d y %d: ", intentoNum, min, max);
        scanf("%d", &intento);
        if (intento < min || intento > max) {
            printf("Error: número fuera de rango.\n");
        }
    } while (intento < min || intento > max);
    return intento;
}

// Muestra el resumen de los intentos
void mostrarResumen(int intentos[], int totalIntentos, int numeroSecreto, int gano) {
    printf("\nResumen del juego:\n");
    for (int i = 0; i < totalIntentos; i++) {
        printf("Intento %d: %d\n", i + 1, intentos[i]);
    }

    if (!gano) {
        printf("No lograste adivinar el número. El número secreto era: %d\n", numeroSecreto);
    }
}
