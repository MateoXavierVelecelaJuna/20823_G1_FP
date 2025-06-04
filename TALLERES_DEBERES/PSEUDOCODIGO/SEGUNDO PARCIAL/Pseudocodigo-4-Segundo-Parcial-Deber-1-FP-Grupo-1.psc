//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 4; U2 T1
//Orden Iterativo para vector de mayor a menor

Algoritmo OrdenacionVectorDescendente
    // definición de variables
    Definir vector Como Entero
    Definir i, j, temp, n Como Entero
    Dimension vector[10]
    n <- 10
    
    // asignacion de valores al vector (puede modificarse)
    vector[1] <- 23
    vector[2] <- 5
    vector[3] <- 78
    vector[4] <- 12
    vector[5] <- 9
    vector[6] <- 34
    vector[7] <- 67
    vector[8] <- 42
    vector[9] <- 3
    vector[10] <- 19
    
    // mostrar vector original
    Escribir "Vector original:"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
    
    // algoritmo para orden descendente por ordenación
    Para i <- 1 Hasta n-1 Con Paso 1 Hacer
        Para j <- i+1 Hasta n Con Paso 1 Hacer
            Si vector[i] < vector[j] Entonces
                // Intercambiar elementos
                temp <- vector[i]
                vector[i] <- vector[j]
                vector[j] <- temp
            FinSi
        FinPara
    FinPara
    
    // mostrar resultado
    Escribir "Vector ordenado (mayor a menor):"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
FinAlgoritmo