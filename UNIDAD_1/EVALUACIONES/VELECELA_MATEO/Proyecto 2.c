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

    // RF01 - Configuraci�n del rango
    printf("Ingrese el valor m�nimo del rango: ");
    scanf("%d", &min);
    printf("Ingrese el valor m�ximo del rango: ");
    scanf("%d", &max);

    while (min >= max) {
        printf("Error: el m�nimo debe ser menor que el m�ximo. Intente de nuevo.\n");
        printf("Ingrese el valor m�nimo del rango: ");
        scanf("%d", &min);
        printf("Ingrese el valor m�ximo del rango: ");
        scanf("%d", &max);
    }

    // RF02 - Configuraci�n del n�mero de intentos
    printf("Ingrese el n�mero de intentos (m�ximo 10): ");
    scanf("%d", &totalIntentos);
    while (totalIntentos < 1 || totalIntentos > 10) {
        printf("Error: n�mero de intentos inv�lido. Ingrese entre 1 y 10: ");
        scanf("%d", &totalIntentos);
    }

    // RF01 - Generar n�mero secreto
    srand(time(NULL));
    numeroSecreto = generarNumeroSecreto(min, max);

    // RF04 - Registro de intentos en un vector
    int intentos[10]; // m�ximo 10

    for (int i = 0; i < totalIntentos; i++) {
        intentos[i] = obtenerIntento(i + 1, min, max); // RF03

        if (intentos[i] == numeroSecreto) {
            printf("�Adivinaste el n�mero!\n");
            printf("Mensaje secreto: 123456789\n");
            gano = 1;
            break;
        } else if (intentos[i] < numeroSecreto) {
            printf("Muy bajo.\n");
        } else {
            printf("Muy alto.\n");
        }
    }

    // RF05 - Visualizaci�n de resultados
    mostrarResumen(intentos, totalIntentos, numeroSecreto, gano);

    return 0;
}

// Genera un n�mero secreto entre min y max
int generarNumeroSecreto(int min, int max) {
    return rand() % (max - min + 1);
}

// Solicita un intento validando el rango
int obtenerIntento(int intentoNum, int min, int max) {
    int intento;
    do {
        printf("Intento %d - Ingresa un n�mero entre %d y %d: ", intentoNum, min, max);
        scanf("%d", &intento);
        if (intento < min || intento > max) {
            printf("Error: n�mero fuera de rango.\n");
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
        printf("No lograste adivinar el n�mero. El n�mero secreto era: %d\n", numeroSecreto);
    }
}
