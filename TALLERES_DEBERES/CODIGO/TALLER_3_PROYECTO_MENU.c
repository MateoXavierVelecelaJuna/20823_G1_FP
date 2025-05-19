#include <stdio.h>
#include <math.h> //para funcionamiento de ejercicio 2

// Declaración de funciones 
void menuPrincipal();
void ejercicios1a10();
void ejercicios11a20();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();
void ejercicio18();
void ejercicio19();
void ejercicio20();

int main() {
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int opcion;

    do {
        printf("\n========== BIENVENIDOS AL MENU PRINCIPAL ==========\n");
        printf("\n======= Programas De Fundamentos de Programación =======\n"); 
        printf("\n========== GRUPO 1 ==========\n");
        printf("1. Ejercicios 1-10\n");
        printf("2. Ejercicios 11-20\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                ejercicios1a10(); // submenú 1
                break;
            case 2:
                ejercicios11a20(); // submenú 2
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 0); 
}

// Menu del 1 al 10
void ejercicios1a10() {
    int opcion1;

  do{ 
    printf("\n=== EJERCICIOS DEL 1 AL 10 ===\n");
    printf("1. Ejercicio 1\n");
    printf("2. Ejercicio 2\n");
    printf("3. Ejercicio 3\n");
    printf("4. Ejercicio 4\n");
    printf("5. Ejercicio 5\n");
    printf("6. Ejercicio 6\n");
    printf("7. Ejercicio 7\n");
    printf("8. Ejercicio 8\n");
    printf("9. Ejercicio 9\n");
    printf("10. Ejercicio 10\n");
    printf("0. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion1);

        switch(opcion1) {
            case 1:
                ejercicio1(); 
                break;
            case 2:
                ejercicio2(); 
                break;
            case 3:
                ejercicio3(); 
                break;
            case 4:
                ejercicio4(); 
                break;
            case 5:
                ejercicio5(); 
                break;
            case 6:
                ejercicio6(); 
                break;    
            case 7:
                ejercicio7(); 
                break; 
  
            case 8:
                ejercicio8(); 
                break;
            case 9:
                ejercicio9(); 
                break;
            case 10:
                ejercicio10();
                break;
            case 0:
               
                break;

            default:
                printf("Opción inválida. Intente de nuevo.\n");
           }
   }while(opcion1 != 0);

}

void ejercicio1(){
    float a, b, res; 
    printf("Ejercicio 1: Media de dos valores\n");
    printf("Ingrese el Primer Número: ");
    scanf("%f", &a);

    printf("Ingrese el Segundo Número: ");
    scanf("%f", &b);

    res=(a+b)/2;

    printf("La media es: %.2f\n", res);

    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter

}

void ejercicio2(){
    float num, resultado;
    printf("Ejercicio 2: Valor absoluto de X al cubo\n");
    printf("Ingrese un número real X: ");
    scanf("%f", &num);

    float cubo= num*num*num;
    resultado=fabs(cubo);

    printf("El valor absoluto de x cubo es: %.2f\n", resultado);
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter

    
}

void ejercicio3(){
    int num1,num2;
    printf("Ejercicio 3: Divisible\n");
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    
    if(num2==0){
        printf("No se puede dividir entre 0.\n");
    } else {
        if (num1%num2==0){
            printf("%d Es divisible por %d.\n" ,num1,num2);
        } else {
            printf("%d No es divisible por %d. \n", num1,num2);
        }
    }
    printf("\nPresione Enter para regresar al menú...");
    while(getchar() != '\n'); // limpiar buffer
    getchar(); // esperar Enter

}

void ejercicio4(){
    float z;   
    printf("Ejercicio 4: Intervalo\n");
    printf("Ingresa un número real: ");
    scanf("%f", &z);
    if (z>0 && z<=10){
        printf("El número SI pertenece al intervalo (0,10]");
    } else{
        printf("El número NO pertenece al intervalo (0,10]");
    }
    printf("\nPresione Enter para regresar al menú...");
    while(getchar() != '\n'); // limpiar buffer
    getchar(); // esperar Enter

}

void ejercicio5(){
    int numero, horas, minutos, dias, y;
    printf("Ejercicio 5: Conversión de Unidades\n");
    printf("Ingrese un valor en segundos: ");
    scanf("%i", &numero);

    dias=numero/86400;
    y= numero %86400;

    horas=y/3600;
    y=y%3600;

    minutos=y/60;
    y= y % 60;

    printf(" %d Dias, %d Horas, %d Minutos, %d Segundos \n", dias,horas,minutos,y);

    printf("\nPresione Enter para regresar al menú...");
    while(getchar() != '\n'); // limpiar buffer
    getchar(); // esperar Enter

}

void ejercicio6(){
    float var1,var2,var3,exe;
    printf("Ejercicio 6: Media de números positivos\n");
    printf("Ingrese primer número positivo: ");
    scanf("%f", &var1);
    printf("Ingrese segundo número positivo: ");
    scanf("%f", &var2);
    printf("Ingrese tercer número positivo: ");
    scanf("%f", &var3);

    exe=(var1+var2+var3)/3;
    printf("La media aritmética de los números ingresados es: %.2f ", exe);

    printf("\nPresione Enter para regresar al menú...");
    while(getchar() != '\n'); // limpiar buffer
    getchar(); // esperar Enter

}

void ejercicio7(){
    float altura, suma=0, max, min; 
    int contador=0;
    printf("Ejercicio 7: Máximo, mínimo y media de alturas \n");
    printf("Ingrese alturas positivas (para terminar ingrese un número negativo)\n");
    while (1) {
        printf("Altura %d: ", contador + 1);
        scanf("%f", &altura);

        if (altura < 0)
            break;

        // Si es la primera altura, inicializamos min y max
        if (contador == 0) {
            max = min = altura;
        } else {
            if (altura > max) max = altura;
            if (altura < min) min = altura;
        }

        suma += altura;
        contador++;
    }

    if (contador == 0) {
        printf("No se ingresaron alturas válidas.\n");
    } else {
        float media = suma / contador;
        printf("\nCantidad de alturas: %d\n", contador);
        printf("Altura media: %.2f\n", media);
        printf("Altura máxima: %.2f\n", max);
        printf("Altura mínima: %.2f\n", min);
    }
     printf("\nPresione Enter para regresar al menú...");
    while (getchar() != '\n'); // limpia buffer
    getchar(); // espera Enter

}

 void ejercicio8(){
    int n, i= 1; 
    printf("Ejercicio 8: Raíz Entera\n");
    printf("Ingrese un número: ");
    scanf("%i", &n);
    while(i*i<=n){
        i++;
    }
    printf("La raíz entera es: %d\n", i-1);
    printf("\nPresione Enter para regresar al menú...");
    while (getchar() != '\n');
    getchar();

}

int esPrimo(int n); // Declaración

void ejercicio9() {
    int b, u;

    printf("Ejercicio 9: Números primos comprendidos entre dos números dados\n");
    printf("Ingrese el primer número: ");
    scanf("%d", &b);
    printf("Ingrese el segundo número: ");
    scanf("%d", &u);

    printf("Números primos entre %d y %d:\n", b, u);

    for (int k = b + 1; k < u; k++) {
        if (esPrimo(k)) {
            printf("%d ", k);
        }
    }

    printf("\nPresione Enter para regresar al menú...");
    while (getchar() != '\n'); // Limpiar buffer
    getchar(); // Esperar Enter
}


int esPrimo(int n) {
    if (n <= 1) return 0;

    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0)
            return 0;
    }

    return 1;
}

void ejercicio10(){
     printf("Ejercicio 10: Regresar a ejercicio 9\n");
     printf("\nPresione Enter para regresar al menú...");
    while (getchar() != '\n'); // Limpiar buffer
    getchar(); // Esperar Enter
}



void ejercicios11a20() {
    int opcion2;

  do{ 
    printf("\n== EJERCICIOS DEL 11 AL 20 ==\n");
    printf("11. Ejercicio 11\n");
    printf("12. Ejercicio 12\n");
    printf("13. Ejercicio 13\n");
    printf("14. Ejercicio 14\n");
    printf("15. Ejercicio 15\n");
    printf("16. Ejercicio 16\n");
    printf("17. Ejercicio 17\n");
    printf("18. Ejercicio 18\n");
    printf("19. Ejercicio 19\n");
    printf("20. Ejercicio 20\n");
    printf("0. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion2);

        switch(opcion2) {
            case 11:
                ejercicio11(); 
                break;
            case 12:
                ejercicio12(); 
                break;
            case 13:
                ejercicio13();
                break;
            case 14:
                ejercicio14(); 
                break;
            case 15:
                ejercicio15(); 
                break;
            case 16:
                ejercicio16(); 
                break;    
            case 17:
                ejercicio17(); 
                break; 
  
            case 18:
                ejercicio18();
                break;
            case 19:
                ejercicio19(); 
                break;
            case 20:
                ejercicio20(); 
                break;
            case 0:
               
                break;

            default:
                printf("Opción inválida. Intente de nuevo.\n");
           }
   }while(opcion2 != 0);
}

void ejercicio11(){
    int edad;
    printf("Ejercicio 11: Determinar si una persona es mayor de edad\n");
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

        if (edad >= 18) {
        printf("Usted es mayor de edad.\n");
    }   
   
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter

}

void ejercicio12(){
    int numero1;
    printf("Ejercicio 12: Calcular si un número es par o impar\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &numero1);

    // IF COMPUESTO: if + else
    if (numero1 % 2 == 0) {
        printf("El número %d es PAR.\n", numero1);
    } else {
        printf("El número %d es IMPAR.\n", numero1);
    }
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter
}

void ejercicio13(){
    float nota;
    printf("Ejercicio 13: Validar ingreso de nota entre el 0 y el 10\n");
    do {
        printf("Ingrese una nota entre 0 y 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("¡Nota inválida! Debe estar entre 0 y 10.\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota válida ingresada: %.2f\n", nota);
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter

}

void ejercicio14(){
    int i = 1;
    
    printf("Ejercicio 14: Imprimir números del 1 al 5\n");

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter
}

void ejercicio15(){
    int nu;
    printf("Ejercicio 15: Determinar si un número es positivo, negativo o cero\n");
    printf("Ingrese el numero: ");
    scanf("%d", &nu);

    if (nu > 0) {
        printf("El numero es positivo\n");
    } else {
        if (nu < 0) {
            printf("El numero es negativo\n");
        } else {
            if (nu == 0) {
                printf("El numero es cero\n");
            }
        }
    }
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter
}

void ejercicio16(){
    int su = 0;
    printf("Ejercicio 16: Suma de los primeros 10 números naturales\n");
    for (int nu = 1; nu <= 10; nu++) {
        su += nu;
    }

    printf("La suma de los 10 primeros números naturales es: %d\n", su);
    printf("\nPresione Enter para volver al menú anterior...");
    while(getchar() != '\n');  // limpiar buffer
    getchar();                 // esperar Enter
}

void ejercicio17(){
    int c;
        printf("Ejercicio 17: Pedir números hasta ingresar uno negativo\n");

    do {
        printf("Ingrese un número (negativo para terminar): ");
        scanf("%d", &c);

        if (c >= 0) {
            printf("Número ingresado: %d\n", c);
        }

    } while (c >= 0);

    printf("Número negativo ingresado. Fin del ejercicio.\n");
    printf("\nPresione Enter para volver al menú anterior...");
    while (getchar() != '\n');  // limpiar buffer
    getchar();                  // esperar Enter
}

void ejercicio18(){
    printf("Ejercicio 18: Mostrar los números pares del 1 al 10\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    printf("\nPresione Enter para volver al menú anterior...");
    while (getchar() != '\n'); // limpiar buffer
    getchar();                 // esperar Enter
}

void ejercicio19(){
    
    int contrasenaCorrecta = 1234;  
    int intento;

    printf("Ejercicio 19: Validar contraseña numérica hasta que sea correcta\n");

    do {
        printf("Ingrese la contraseña numérica: ");
        scanf("%d", &intento);

        if (intento != contrasenaCorrecta) {
            printf("Contraseña incorrecta. Intente nuevamente.\n");
        }

    } while (intento != contrasenaCorrecta);

    printf("¡Contraseña correcta!\n");

    printf("\nPresione Enter para volver al menú anterior...");
    while (getchar() != '\n');  // limpiar buffer
    getchar();                  // esperar Enter

}

void ejercicio20(){
    float nur, sum = 0;
    int p;

    printf("Ejercicio 20: Calcular el promedio de 5 números ingresados\n");

    for (p = 1; p <= 5; p++) {
        printf("Ingrese el número %d: ", p);
        scanf("%f", &nur);
        sum += nur;
    }

    float promedio = sum / 5;
    printf("El promedio de los 5 números es: %.2f\n", promedio);

    printf("\nPresione Enter para volver al menú anterior...");
    while (getchar() != '\n');
    getchar();
}

