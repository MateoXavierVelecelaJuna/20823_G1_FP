#include <stdio.h>

int main()
{
int n, i= 1; 
    printf("Ejercicio 8: Raíz Entera\n");
    printf("Ingrese un número: ");
    scanf("%i", &n);
    while(i*i<=n){
        i++;
    }
    printf("La raíz entera es: %d\n", i-1);
    return 0;
}
