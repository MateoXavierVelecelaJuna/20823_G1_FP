Algoritmo RecorridoMatrizInverso
    Definir N, i, j Como Entero
    Dimension matriz[10,10] // Declaraci�n correcta
    
    // Solicitar tama�o de la matriz
    Escribir "Ingrese el tama�o N de la matriz cuadrada (N x N, m�ximo 10): "
    Leer N
    
    // Validar tama�o
    Si N <= 0 O N > 10 Entonces
        Escribir "Tama�o inv�lido. Debe ser entre 1 y 10."
    Sino
        // Llenar la matriz con valores de ejemplo
        Para i <- 1 Hasta N Hacer
            Para j <- 1 Hasta N Hacer
                matriz[i,j] <- (i - 1) * N + j
            FinPara
        FinPara
		
        // Mostrar matriz original
        Escribir "Matriz original:"
        Para i <- 1 Hasta N Hacer
            Para j <- 1 Hasta N Hacer
                Escribir Sin Saltar matriz[i,j], " "
            FinPara
            Escribir ""
        FinPara
		
        // Recorrer y mostrar en orden inverso
        Escribir "Matriz en orden inverso:"
        Para i <- N Hasta 1 Con Paso -1 Hacer
            Para j <- N Hasta 1 Con Paso -1 Hacer
                Escribir Sin Saltar matriz[i,j], " "
            FinPara
            Escribir ""
        FinPara
    FinSi
FinAlgoritmo
