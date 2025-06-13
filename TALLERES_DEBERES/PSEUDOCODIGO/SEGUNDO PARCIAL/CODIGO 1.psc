Algoritmo IntercambioFilasMatriz
    Definir N, i, j, fila_i, fila_j, aux, k Como Entero
    Dimension matriz[10,10] // Matriz máxima de 10x10
	
    // Solicitar tamaño de la matriz
    Escribir "Ingrese el tamaño N de la matriz cuadrada (N x N, máximo 10): "
    Leer N
	
    // Validar tamaño
    Si N <= 0 O N > 10 Entonces
        Escribir "Tamaño inválido. Debe ser entre 1 y 10."
    Sino
        // Llenar matriz con valores de ejemplo
        Para i <- 1 Hasta N Hacer
            Para j <- 1 Hasta N Hacer
                matriz[i,j] <- (i-1)*N + j // Valores secuenciales
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
		
        // Solicitar filas a intercambiar
        Escribir "Ingrese las filas a intercambiar (i y j, entre 1 y ", N, "): "
        Leer fila_i, fila_j
		
        // Validar filas
        Si fila_i < 1 O fila_i > N O fila_j < 1 O fila_j > N Entonces
            Escribir "Error: Las filas deben estar entre 1 y ", N
        Sino
            // Intercambiar filas
            Para k <- 1 Hasta N Hacer
                aux <- matriz[fila_i, k]
                matriz[fila_i, k] <- matriz[fila_j, k]
                matriz[fila_j, k] <- aux
            FinPara
			
            // Mostrar matriz modificada
            Escribir "Matriz con filas ", fila_i, " y ", fila_j, " intercambiadas:"
            Para i <- 1 Hasta N Hacer
                Para j <- 1 Hasta N Hacer
                    Escribir Sin Saltar matriz[i,j], " "
                FinPara
                Escribir ""
            FinPara
        FinSi
    FinSi
FinAlgoritmo
