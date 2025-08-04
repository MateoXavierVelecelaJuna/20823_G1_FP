#include <stdio.h>
#include <string.h>

// Definición de la estructura Producto
typedef struct {
    char id[20];         // ID del producto
    char nombre[50];     // Nombre del producto
    float precio;        // Precio del producto
    int stock;           // Stock del producto
} Producto;

// Función para agregar un producto nuevo
void crearProducto(Producto *p) {
    printf("Ingrese ID: ");
    fgets(p->id, 20, stdin);
    p->id[strcspn(p->id, "\n")] = '\0';

    printf("Ingrese Nombre del producto: ");
    fgets(p->nombre, 50, stdin);
    p->nombre[strcspn(p->nombre, "\n")] = '\0';

    printf("Ingrese Precio: ");
    scanf("%f", &p->precio);

    printf("Ingrese Stock: ");
    scanf("%d", &p->stock);
    getchar(); // Limpia el buffer del teclado
}

// Función para mostrar los datos de un producto
void mostrarProducto(Producto p) {
    printf("\nID: %s\n", p.id);
    printf("Nombre: %s\n", p.nombre);
    printf("Precio: %.2f\n", p.precio);
    printf("Stock: %d\n", p.stock);
}

// Función para buscar un producto por ID
int buscarPorID(Producto lista[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(lista[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}

// Función para eliminar un producto (vacía el registro)
void eliminarProducto(Producto *p) {
    strcpy(p->id, "");
    strcpy(p->nombre, "");
    p->precio = 0;
    p->stock = 0;
}

// Función para guardar productos en archivo
void guardarProductosEnArchivo(Producto lista[], int cantidad) {
    FILE *archivo = fopen("productos.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    for (int i = 0; i < cantidad; i++) {
        if (strlen(lista[i].id) > 0) {
            fprintf(archivo, "ID: %s\n", lista[i].id);
            fprintf(archivo, "Nombre: %s\n", lista[i].nombre);
            fprintf(archivo, "Precio: %.2f\n", lista[i].precio);
            fprintf(archivo, "Stock: %d\n", lista[i].stock);
            fprintf(archivo, "----------------------\n");
        }
    }

    fclose(archivo);
}

int main() {
    Producto lista[100];
    int cantidad = 0;
    int opcion;
    char idBuscada[20];

    while (1) {
        printf("\n--- BIENVENIDO AL LA LISTA DE PRODUCTOS ---\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar todos los productos\n");
        printf("3. Buscar por ID\n");
        printf("4. Eliminar producto\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        getchar(); // Limpia el buffer

        if (opcion == 1) {
            crearProducto(&lista[cantidad]);
            cantidad++;
            guardarProductosEnArchivo(lista, cantidad);
        } else if (opcion == 2) {
            for (int i = 0; i < cantidad; i++) {
                if (strlen(lista[i].id) > 0)
                    mostrarProducto(lista[i]);
            }
        } else if (opcion == 3) {
            printf("Ingrese el ID a buscar: ");
            fgets(idBuscada, 20, stdin);
            idBuscada[strcspn(idBuscada, "\n")] = '\0';
            int pos = buscarPorID(lista, cantidad, idBuscada);
            if (pos != -1 && strlen(lista[pos].id) > 0)
                mostrarProducto(lista[pos]);
            else
                printf("Producto no encontrado.\n");
        } else if (opcion == 4) {
            printf("Ingrese el ID a eliminar: ");
            fgets(idBuscada, 20, stdin);
            idBuscada[strcspn(idBuscada, "\n")] = '\0';
            int pos = buscarPorID(lista, cantidad, idBuscada);
            if (pos != -1 && strlen(lista[pos].id) > 0) {
                eliminarProducto(&lista[pos]);
                guardarProductosEnArchivo(lista, cantidad);
                printf("Producto eliminado.\n");
            } else {
                printf("Producto no encontrado.\n");
            }
        } else if (opcion == 5) {
            printf("Saliendo...\n");
            break;
        } else {
            printf("Opción no válida. Intente de nuevo.\n");
        }
    }

    return 0;
}
