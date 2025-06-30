/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
NOMBRE: ANTHONY CAMPOVERDE
EVALUACION CONJUNTA SEGUNDO PARCIAL FUNDAMENTOS DE PROGRAMACION
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_INTENTOS 10

int main (){

    int minimo, maximo, numeroSecreto;
    int totalIntentos;
    int matriz[MAX_INTENTOS][3] = {0}; // [intento][0]=nro, [1]=valor, [2]=resultado
    int intento, resultado, repetido;
    int gano = 0;

    // RF01 – Configuracion dinamica del rango: el usuario define el rango minimo y maximo del numero secreto
    printf("Ingresa el valor minimo rango: ");
    scanf("%d", &minimo);
    printf("Ingresa el valor maximo rango: ");
    scanf("%d", &maximo);

    if (minimo>=maximo){
        printf("El minimo debe ser menor que el maximo. Programa terminado.\n");
        return 1;
    }

    //RF02 Configuracion dinamica de intentos: El programa debe permitir que el usuario seleccione el numero maximo de intentos (hasta 10)

    do {
        printf("Cuantos intentos desea usar? (MAX %d): ", MAX_INTENTOS);
        scanf("%d", &totalIntentos);
    } while (totalIntentos < 1 || totalIntentos > MAX_INTENTOS);

    srand(time(NULL));
    numeroSecreto = (rand() % (maximo - minimo + 1)) + minimo;

    for (int i = 0; i < totalIntentos; i++) {
        repetido = 0;
        do {
            printf("Intento %d: Ingrese un numero entre %d y %d: ", i + 1, minimo, maximo);
            scanf("%d", &intento);

            if (intento < minimo || intento > maximo) {
                printf("Numero fuera del rango, intente nuevamente.\n");
                continue;
            }

    // RF03 – Validacion de duplicados: El programa debe validar que cada intento este dentro del rango y no se repita
            repetido = 0;
            for (int j = 0; j < i; j++) {
                if (matriz[j][1] == intento) {
                    repetido = 1;
                    break;
                }
            }

            if (repetido) {
                printf("Ya ingreso ese numero, Intente con otro diferente.\n");
            }
        } while (intento < minimo || intento > maximo || repetido);

        // Determinar resultado, para poder saber si es más alto o más bajo y poder tenerlo en cuenta en matriz con resultados
        if (intento < numeroSecreto) {
            resultado = 0; // bajo
            printf("Muy bajo.\n");
        } else if (intento > numeroSecreto) {
            resultado = 1; // alto
            printf("Muy alto.\n");
        } else {
            resultado = 2; // correcto
            printf("Correcto. Adivino el numero.\n");
            gano = 1;
        }

  // RF04 – Registrar intentos en matriz: El programa debe almacenar en una matriz el numero de intento, el valor ingresado y el resultado (0 bajo, 1 alto, 2 correcto)
        matriz[i][0] = i + 1;
        matriz[i][1] = intento;
        matriz[i][2] = resultado;

        if (gano) break;
    }


    // RF05 – Mostrar resumen: El programa debe mostrar una tabla con cada intento y el textual, revelar el numero secreo si no se adivino
    printf("\nRESUMEN DEL JUEGO\n");
    printf("Intento | Valor ingresado | Resultado\n");
    printf("-------------------------------------\n");
    for (int i = 0; i < totalIntentos; i++) {
        if (matriz[i][0] == 0) break;

        printf("   %2d   |      %5d      | ", matriz[i][0], matriz[i][1]);
        switch (matriz[i][2]) {
            case 0: printf("Muy bajo\n"); break;
            case 1: printf("Muy alto\n"); break;
            case 2: printf("Correcto\n"); break;
        }
    }

    if (!gano) {
        printf("\nNo logro adivinar el numero. El numero secreto era: %d\n", numeroSecreto);
    } else {
        printf("\nFelicidades por adivinar el numero secreto.\n");
    }


   return 0;
}

