#include <stdio.h>

int main() {
 int contrasenaCorrecta = 1234;  // Puedes cambiar la contraseña
    int intento;

    printf("Ejercicio 19: Validar contraseña numérica hasta que sea correcta\n");

    do {
        printf("Ingrese la contraseña numerica: ");
        scanf("%d", &intento);

        if (intento != contrasenaCorrecta) {
            printf("Contraseña incorrecta. Intente nuevamente.\n");
        }

    } while (intento != contrasenaCorrecta);

    printf("¡Contraseña correcta!\n");

    return 0;
}
