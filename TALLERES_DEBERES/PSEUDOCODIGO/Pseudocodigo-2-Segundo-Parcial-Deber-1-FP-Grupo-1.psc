//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 2; U2 T1
//COMPROBAR VALORES EN VECTOR

Algoritmo ComprobarValoresEnVector
    // Definir el vector predefinido
    Definir vec Como Entero
    Dimension vec[15]  // Ejemplo: vector de 5 elementos
    vec[1] <- 4
    vec[2] <- 7
    vec[3] <- 12
    vec[4] <- 19
    vec[5] <- 28
	vec[6] <- 46
	vec[7] <- 9
	vec[8] <- 6
    vec[9] <- 78
    vec[10] <- 89
    vec[11] <- 21
    vec[12] <- 95
    vec[13] <- 1
	vec[14] <- 73
	vec[15] <- 10

    
    // Variables para los números y banderas
    Definir num1, num2, flag1, flag2, i Como Entero
    flag1 <- 0
    flag2 <- 0
    
    // Leer los números del usuario
    Escribir "Ingrese el primer número: "
    Leer num1
    Escribir "Ingrese el segundo número: "
    Leer num2
    
    // Recorrer el vector para buscar los números
    Para i <- 1 Hasta 15 Hacer
        Si vec[i] = num1 Entonces
            flag1 <- 1
        FinSi
        Si vec[i] = num2 Entonces
            flag2 <- 1
        FinSi
    FinPara
    
    // Verificar resultados
    Si flag1 = 1 Y flag2 = 1 Entonces
        Escribir "Ambos números están en el vector."
    Sino
        Escribir "Al menos uno de los números no está en el vector."
    FinSi
FinAlgoritmo
