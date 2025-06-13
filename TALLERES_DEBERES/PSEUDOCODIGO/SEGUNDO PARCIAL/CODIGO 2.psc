Algoritmo MaximoDeUnaFila
	
    Definir N, fila, i, j, maximo Como Entero
    Dimension matriz[10, 10]  // límite superior razonable
	
	Repetir
		Escribir "Ingrese el tamaño N de la matriz NxN (entre 1 y 10):"
		Leer N
		
		Si N <= 0 O N > 10 Entonces
			Escribir "Error: N debe estar entre 1 y 10, intente nuevamente."
		FinSi
		
	Hasta Que N > 0 Y N <= 10
	
    // Leer los valores de la matriz
    Para i <- 1 Hasta N
        Para j <- 1 Hasta N
            Escribir "Ingrese el valor para la posición [", i, ",", j, "]:"
            Leer matriz[i, j]
        FinPara
    FinPara
	
    // Solicitar la fila a analizar
    Escribir "Ingrese el número de fila (entre 1 y ", N, ") para buscar el máximo:"
    Leer fila
	
    // Validar que la fila esté en el rango correcto
    Mientras fila < 1 o fila > N
        Escribir "Fila fuera de rango. Intente nuevamente:"
        Leer fila
    FinMientras
	
    // Buscar el valor máximo en esa fila
    maximo <- matriz[fila, 1]
    Para j <- 2 Hasta N
        Si matriz[fila, j] > maximo Entonces
            maximo <- matriz[fila, j]
        FinSi
    FinPara
	
    Escribir "El valor máximo en la fila ", fila, " es: ", maximo
	
FinAlgoritmo