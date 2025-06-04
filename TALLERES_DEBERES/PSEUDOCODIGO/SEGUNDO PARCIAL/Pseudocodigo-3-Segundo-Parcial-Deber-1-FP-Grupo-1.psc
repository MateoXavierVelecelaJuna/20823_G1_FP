//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 3; U2 T1
//FACTORIALES EN VECTOR

Algoritmo VectorFactorialesGrandes
    // definicion de variables, unas como entero otra como real (por lo grande que es)
    Definir Vec, j Como Entero
    Definir fact Como Real        // real para numero grandes
    Dimension Vec[15], fact[15]   // indice del vector de 1 al 15
    
    // llenar los numeros del 1 al 15 al vector
    Para i <- 1 Hasta 15 Con Paso 1 Hacer
        Vec[i] <- i
    FinPara
    
    // calculo de factoriales
    Para i <- 1 Hasta 15 Con Paso 1 Hacer
        fact[i] <- 1  // iniciamos factorial en 1
        
        Para j <- 1 Hasta Vec[i] Con Paso 1 Hacer
            fact[i] <- fact[i] * j  // calculo acumulativo de factores
        FinPara
    FinPara
    
    // resultados
    Escribir "Vector de factoriales:"
    Para i <- 1 Hasta 15 Con Paso 1 Hacer
        Escribir Vec[i], "! = ", fact[i]
    FinPara
FinAlgoritmo
