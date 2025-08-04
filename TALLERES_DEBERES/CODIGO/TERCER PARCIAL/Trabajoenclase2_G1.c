#include <stdio.h>
#include <direct.h>  // Para _mkdir en Windows
#include <stdlib.h>

int main() {
    // Crear la carpeta
    if (_mkdir("CarpetaSecreta") == 0) {
        printf("Carpeta creada correctamente.\n");
    } else {
        printf("La carpeta ya existe o no se pudo crear.\n");
    }

    // Abrir archivo para agregar un nuevo contacto
    FILE *f = fopen("CarpetaSecreta/agenda.txt", "a");
    if (f == NULL) {
        printf("No se pudo crear o abrir el fichero de agenda.\n");
        return 1;
    }

    // Variables para los datos del contacto
    char nombre[50], apellidos[50], telefono[20];
    char callePrincipal[100], calleSecundaria[100], correo[100];

    // Pedir al usuario que introduzca los datos
    printf("=== Insertar nuevo contacto ===\n");

    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Apellidos: ");
    fgets(apellidos, sizeof(apellidos), stdin);

    printf("Telefono: ");
    fgets(telefono, sizeof(telefono), stdin);

    printf("Calle Principal: ");
    fgets(callePrincipal, sizeof(callePrincipal), stdin);

    printf("Calle Secundaria: ");
    fgets(calleSecundaria, sizeof(calleSecundaria), stdin);

    printf("Correo electronico: ");
    fgets(correo, sizeof(correo), stdin);

    // Guardar los datos en el archivo
    fprintf(f, "-----------------------------\n");
    fprintf(f, "Nombre: %s", nombre);
    fprintf(f, "Apellidos: %s", apellidos);
    fprintf(f, "Telefono: %s", telefono);
    fprintf(f, "Dirección: %s y %s", callePrincipal, calleSecundaria);
    fprintf(f, "Correo electronico: %s", correo);
    fprintf(f, "-----------------------------\n\n");

    fclose(f);

    printf("Contacto guardado con éxito en CarpetaSecreta/agenda.txt.\n");

    return 0;
}
