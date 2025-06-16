/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
NOMBRES: ALVEAR ALEXANDER, CAMPOVERDE ANTHONY, VELECELA MATEO
GRUPO: 1
EJERCICIO 2 DE VECTORES CON FUNCIONES Y PUNTEROS
*/

#include <stdio.h>

#define SIZE 15

// Prototipos
void ingresarNumeros(int *num1, int *num2);
void verificarNumerosEnVector(int vec[], int size, int num1, int num2, int *flag1, int *flag2);
void mostrarResultado(int flag1, int flag2);

int main() {
    int vec[] = {4, 7, 12, 19, 28, 46, 9, 6, 78, 89, 21, 95, 1, 73, 10};
    int num1, num2;
    int flag1 = 0, flag2 = 0;

    ingresarNumeros(&num1, &num2);
    verificarNumerosEnVector(vec, SIZE, num1, num2, &flag1, &flag2);
    mostrarResultado(flag1, flag2);

    return 0;
}

// Función para ingresar los números
void ingresarNumeros(int *num1, int *num2) {
    printf("Ingrese el primer numero: ");
    scanf("%d", num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", num2);
}

// Función para verificar si los números están en el vector
void verificarNumerosEnVector(int vec[], int size, int num1, int num2, int *flag1, int *flag2) {
    for (int i = 0; i < size; i++) {
        if (vec[i] == num1) *flag1 = 1;
        if (vec[i] == num2) *flag2 = 1;
    }
}

// Función para mostrar el resultado
void mostrarResultado(int flag1, int flag2) {
    if (flag1 && flag2) {
        printf("Ambos numeros estan en el vector.\n");
    } else {
        printf("Al menos uno de los numeros no esta en el vector.\n");
    }
}
