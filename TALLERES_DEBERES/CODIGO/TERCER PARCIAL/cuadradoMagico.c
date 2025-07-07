/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Grupo 1: Campoverde Anthony, Velecela Mateo, Alvear Alexander
07/07/2025
TRABAJO EN CLASE
*/


#include <stdio.h>

int main() {
    int cuadrado[3][3];
    int i, j;
    int suma_actual;
    int es_magico = 1;
    int suma_referencia;
    int suma_total_filas = 0, suma_total_columnas = 0, suma_total_diagonales = 0;

    // R.F.1. Leer y validar el cuadrado
    printf("Introduce los numeros del cuadrado magico 3x3 (1-9):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            do {
                printf("Posicion [%d][%d]: ", i, j);
                scanf("%d", &cuadrado[i][j]);

                if(cuadrado[i][j] < 1 || cuadrado[i][j] > 9) {
                    printf("Error: Debe ser un numero entre 1 y 9.\n");
                }
            } while(cuadrado[i][j] < 1 || cuadrado[i][j] > 9);
        }
    }

    // Mostrar el cuadrado
    printf("\nCuadrado ingresado:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", cuadrado[i][j]);
        }
        printf("\n");
    }

    // R.F.2. Calcular y mostrar sumas de filas
    printf("\n=== SUMAS DE FILAS ===\n");
    suma_referencia = 0;
    for(j = 0; j < 3; j++) {
        suma_referencia += cuadrado[0][j];
    }

    for(i = 0; i < 3; i++) {
        suma_actual = 0;
        for(j = 0; j < 3; j++) {
            suma_actual += cuadrado[i][j];
        }
        printf("Fila %d: %d\n", i+1, suma_actual);
        suma_total_filas += suma_actual;

        if(suma_actual != suma_referencia) {
            es_magico = 0;
        }
    }


    // R.F.3. Calcular y mostrar sumas de columnas
    printf("\n=== SUMAS DE COLUMNAS ===\n");
    for(j = 0; j < 3; j++) {
        suma_actual = 0;
        for(i = 0; i < 3; i++) {
            suma_actual += cuadrado[i][j];
        }
        printf("Columna %d: %d\n", j+1, suma_actual);
        suma_total_columnas += suma_actual;

        if(suma_actual != suma_referencia) {
            es_magico = 0;
        }
    }


    // R.F.4. Calcular y mostrar sumas de diagonales
    printf("\n=== SUMAS DE DIAGONALES ===\n");
    // Diagonal principal
    suma_actual = 0;
    for(i = 0; i < 3; i++) {
        suma_actual += cuadrado[i][i];
    }
    printf("Diagonal principal: %d\n", suma_actual);
    suma_total_diagonales += suma_actual;
    if(suma_actual != suma_referencia) es_magico = 0;

    // Diagonal secundaria
    suma_actual = 0;
    for(i = 0; i < 3; i++) {
        suma_actual += cuadrado[i][2-i];
    }
    printf("Diagonal secundaria: %d\n", suma_actual);
    suma_total_diagonales += suma_actual;
    if(suma_actual != suma_referencia) es_magico = 0;



    // RQ5: Si todas las sumas son iguales, es un cuadrado mágico y se muestra en pantalla
    printf("\n=== RESULTADO FINAL ===\n");
    if(es_magico) {
        printf("¡ES UN CUADRADO MAGICO! (Suma magica: %d)\n", suma_referencia);
    } else {
        printf("NO es un cuadrado magico.\n");
    }

    return 0;
}
