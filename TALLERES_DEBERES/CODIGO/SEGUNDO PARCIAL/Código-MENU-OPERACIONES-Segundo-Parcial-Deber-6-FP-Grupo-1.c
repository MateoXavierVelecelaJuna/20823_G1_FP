/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
NOMBRES: ALVEAR,CAMPOVERDE,VELECELA
GRUPO 1
MENU DE MATRICES (CALCULADORA)
*/

#include <stdio.h>

#define MAX 10


void leerMatriz(int matriz[MAX][MAX], int n, char nombre) {                //Funcion desarollada con parametros para
    printf("Ingrese los elementos de la matriz %c:\n", nombre);            //optimizacion del programa
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c[%d][%d]: ", nombre, i, j);                          //Lectura de componentes del usuario, filas y columnas
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatrizConNombre(int matriz[MAX][MAX], int n, char nombre) {   //Funcion para imprimir con nombre las matrices
    printf("Matriz %c:\n", nombre);                                        //ingresadas por el usuario (solo input)
    for (int i = 0; i < n; i++) {
        printf("(");
        for (int j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf(" )\n");
    }
}


void imprimirMatriz(int matriz[MAX][MAX], int n) {                         //Funcion para imprimir respuesta de operaciones
    for (int i = 0; i < n; i++) {                                          //(solo output)
        printf("(");
        for (int j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf(" )\n");
    }
}

void sumaMatrices(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int n) {   //Funcion de suma de matrices
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res[i][j] = a[i][j] + b[i][j];
}

void restaMatrices(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int n) {  //Funcion de resta de matrices
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res[i][j] = a[i][j] - b[i][j];
}

void multiplicarMatrices(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX], int n) {  //Funcion de multiplicacion de matrices
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
}

void copiarMatriz(int origen[MAX][MAX], int destino[MAX][MAX], int n) {         //Funcion para almacenar matriz para despues poder
    for (int i = 0; i < n; i++)                                                 //multiplicar por si misma en void potencia
        for (int j = 0; j < n; j++)
            destino[i][j] = origen[i][j];
}

void potenciaMatriz(int matriz[MAX][MAX], int res[MAX][MAX], int n, int potencia) {  //Funcion para potencia de matriz
    int temp[MAX][MAX];
    copiarMatriz(matriz, res, n);
    for (int p = 1; p < potencia; p++) {
        copiarMatriz(res, temp, n);
        multiplicarMatrices(temp, matriz, res, n);                     //Llamamos a void copia, para la multiplicacion
    }
}

void escalarMatriz(int matriz[MAX][MAX], int res[MAX][MAX], int n, int escalar) {    //Funcion para multiplicacion de matriz por escalar
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            res[i][j] = matriz[i][j] * escalar;
}

int main() {
    int n, opcion;
    int matrizA[MAX][MAX], matrizB[MAX][MAX], resultado[MAX][MAX];            //Definir variables locales de main
    int escalar, potencia;

    do {
        printf("===============GRUPO 1=============\n");
        printf("===========MENU OPERADORES=========\n");
        printf("=======FUNDA. DE PROGRAMACION======\n");
        printf("\nCalculadora de Matrices NxN (max 10x10)\n");
        printf("Ingrese el tamano N de las matrices (1 a 10): ");
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
        printf("Error: El valor debe estar entre 1 y 10, intente de nuevo.\n\n\n");
        }
    } while (n < 1 || n > MAX);                              //DO- WHILE para impresion de header de programa

    do {
        printf("\nMenu:\n");
        printf("1. Sumar matrices\n");
        printf("2. Restar matrices\n");
        printf("3. Multiplicar matrices\n");
        printf("4. Potencia de una matriz\n");
        printf("5. Multiplicar matriz por escalar\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);                               //DO- WHILE con switch interno para menu de opciones

        switch (opcion) {
            case 1:
                leerMatriz(matrizA, n, 'A');
                leerMatriz(matrizB, n, 'B');
                imprimirMatrizConNombre(matrizA, n, 'A');
                imprimirMatrizConNombre(matrizB, n, 'B');
                sumaMatrices(matrizA, matrizB, resultado, n);
                printf("Matriz C: (A + B)\n");
                imprimirMatriz(resultado, n);
                break;
            case 2:
                leerMatriz(matrizA, n, 'A');
                leerMatriz(matrizB, n, 'B');
                imprimirMatrizConNombre(matrizA, n, 'A');
                imprimirMatrizConNombre(matrizB, n, 'B');
                restaMatrices(matrizA, matrizB, resultado, n);
                printf("Matriz C: (A - B)\n");
                imprimirMatriz(resultado, n);
                break;
            case 3:
                leerMatriz(matrizA, n, 'A');
                leerMatriz(matrizB, n, 'B');
                imprimirMatrizConNombre(matrizA, n, 'A');
                imprimirMatrizConNombre(matrizB, n, 'B');
                multiplicarMatrices(matrizA, matrizB, resultado, n);
                printf("Matriz C :(A * B)\n");
                imprimirMatriz(resultado, n);
                break;
            case 4:
                leerMatriz(matrizA, n, 'A');
                imprimirMatrizConNombre(matrizA, n, 'A');
                printf("Ingrese la potencia (entero positivo): ");
                scanf("%d", &potencia);
                if (potencia < 1) {
                    printf("Potencia invalida.\n");
                    break;
                }
                potenciaMatriz(matrizA, resultado, n, potencia);
                printf("Matriz C (A^%d):\n", potencia);
                imprimirMatriz(resultado, n);
                break;
            case 5:
                leerMatriz(matrizA, n, 'A');
                imprimirMatrizConNombre(matrizA, n, 'A');
                printf("Ingrese el escalar: ");
                scanf("%d", &escalar);
                escalarMatriz(matrizA, resultado, n, escalar);
                printf("Matriz C (A * %d):\n", escalar);
                imprimirMatriz(resultado, n);
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida.\n");                     //Todos los casos llamando a las funciones
        }                                                          //dependiendo de la operacion
    } while (opcion != 0);

    return 0;
}
