Algoritmo IntercambiarFilas
	
    Definir N, i, j, f, c, aux Como Entero
    Dimension mat[100,100]
	
    Escribir "Ingrese el tamaño N de la matriz cuadrada:"
    Leer N
	
    Escribir "Ingrese los elementos de la matriz:"
    Para f <- 1 Hasta N Con Paso 1
        Para c <- 1 Hasta N Con Paso 1
            Escribir "Elemento [", f, "][", c, "]:"
            Leer mat[f, c]
        Fin Para
    Fin Para
	
    Escribir "Ingrese el número de la fila i a intercambiar (entre 1 y ", N, "):"
    Leer i
	
    Escribir "Ingrese el número de la fila j a intercambiar (entre 1 y ", N, "):"
    Leer j
	
    Si i >= 1 Y i <= N Y j >= 1 Y j <= N Entonces
		
        Para c <- 1 Hasta N Con Paso 1
            aux <- mat[i, c]
            mat[i, c] <- mat[j, c]                //cambio
            mat[j, c] <- aux
        Fin Para
		
        Escribir "Matriz después del intercambio:"
        Para f <- 1 Hasta N Con Paso 1
            Para c <- 1 Hasta N Con Paso 1
                Escribir mat[f, c] Sin Saltar
                Escribir " " Sin Saltar
            Fin Para
            Escribir ""                     //salto de linea
        Fin Para
		
    Sino
        Escribir "Índices fuera de rango. No se realizó el intercambio."
    Fin Si
	
FinAlgoritmo
