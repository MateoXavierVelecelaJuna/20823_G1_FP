#include <stdio.h>
#include <string.h>

// Definici�n del TDA Estudiante
typedef struct {
    int id;
    char nombre[50];
    float notas[3];
    float promedio;
} Estudiante;

// Funci�n para calcular promedio
float calcularPromedio(float notas[], int n) {
    float suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

// Funci�n para mostrar un estudiante
void mostrarEstudiante(Estudiante e) {
    printf("ID: %d\n", e.id);
    printf("Nombre: %s\n", e.nombre);
    printf("Nota 1: %.2f\n", e.notas[0]);
    printf("Nota 2: %.2f\n", e.notas[1]);
    printf("Nota 3: %.2f\n", e.notas[2]);
    printf("Promedio: %.2f\n", e.promedio);
    if (e.promedio >= 14.0) {
        printf("Estado: APROBADO\n");
    } else {
        printf("Estado: REPROBADO\n");
    }
}

int main() {
    // Declaraci�n e inicializaci�n de tres estudiantes con sus 3 notas
    Estudiante lista[3];

    lista[0].id = 1;
    strcpy(lista[0].nombre, "Mateo Velecela");
    lista[0].notas[0] = 10.20;
    lista[0].notas[1] = 13.97;
    lista[0].notas[2] = 18.20;
    lista[0].promedio = calcularPromedio(lista[0].notas, 3);

    lista[1].id = 2;
    strcpy(lista[1].nombre, "Antonio Campoverde");
    lista[1].notas[0] = 13.95;
    lista[1].notas[1] = 19.40;
    lista[1].notas[2] = 09.00;
    lista[1].promedio = calcularPromedio(lista[1].notas, 3);

    lista[2].id = 3;
    strcpy(lista[2].nombre, "Seba Alvear");
    lista[2].notas[0] = 11.00;
    lista[2].notas[1] = 13.00;
    lista[2].notas[2] = 18.10;
    lista[2].promedio = calcularPromedio(lista[2].notas, 3);

    printf("Listado de Estudiantes con sus notas, promedio y estado:\n\n");
    for (int i = 0; i < 3; i++) {
        mostrarEstudiante(lista[i]);
        printf("----------------------\n");
    }

    return 0;
}

