#include <stdio.h>
#include <string.h>

// Definición del TDA Estudiante
typedef struct {
    int id;
    char nombre[50];
    float notas[3];
    float promedio;
    char materia[50];  // Nuevo campo: nombre de la materia
} Estudiante;

// Función para calcular el promedio
float calcularPromedio(float notas[], int n) {
    float suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

// Función para mostrar un estudiante
void mostrarEstudiante(Estudiante e) {
    printf("ID: %d\n", e.id);
    printf("Nombre: %s\n", e.nombre);
    printf("Materia: %s\n", e.materia);
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
    Estudiante lista[3];

    // Estudiante 1
    lista[0].id = 1;
    strcpy(lista[0].nombre, "Mateo Velecela");
    strcpy(lista[0].materia, "Fundamentos de Programación");
    lista[0].notas[0] = 10.20;
    lista[0].notas[1] = 13.97;
    lista[0].notas[2] = 18.20;
    lista[0].promedio = calcularPromedio(lista[0].notas, 3);

    // Estudiante 2
    lista[1].id = 2;
    strcpy(lista[1].nombre, "Antonio Campoverde");
    strcpy(lista[1].materia, "Fundamentos de Programación");
    lista[1].notas[0] = 13.95;
    lista[1].notas[1] = 19.40;
    lista[1].notas[2] = 12.00;
    lista[1].promedio = calcularPromedio(lista[1].notas, 3);

    // Estudiante 3
    lista[2].id = 3;
    strcpy(lista[2].nombre, "Seba Alvear");
    strcpy(lista[2].materia, "Fundamentos de Programación");
    lista[2].notas[0] = 11.00;
    lista[2].notas[1] = 13.00;
    lista[2].notas[2] = 18.10;
    lista[2].promedio = calcularPromedio(lista[2].notas, 3);

    // Mostrar estudiantes
    printf("Listado de Estudiantes con sus notas, promedio y estado:\n\n");
    for (int i = 0; i < 3; i++) {
        mostrarEstudiante(lista[i]);
        printf("----------------------\n");
    }

    return 0;
}
