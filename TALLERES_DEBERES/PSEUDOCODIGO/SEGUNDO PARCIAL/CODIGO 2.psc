Algoritmo MaximoDeUnaFila
	
    Definir N, fila, i, j, maximo Como Entero
    Dimension matriz[10, 10]  // l�mite superior razonable
	
	Repetir
		Escribir "Ingrese el tama�o N de la matriz NxN (entre 1 y 10):"
		Leer N
		
		Si N <= 0 O N > 10 Entonces
			Escribir "Error: N debe estar entre 1 y 10, intente nuevamente."
		FinSi
		
	Hasta Que N > 0 Y N <= 10
	
    // Leer los valores de la matriz
    Para i <- 1 Hasta N
        Para j <- 1 Hasta N
            Escribir "Ingrese el valor para la posici�n [", i, ",", j, "]:"
            Leer matriz[i, j]
        FinPara
    FinPara
	
    // Solicitar la fila a analizar
    Escribir "Ingrese el n�mero de fila (entre 1 y ", N, ") para buscar el m�ximo:"
    Leer fila
	
    // Validar que la fila est� en el rango correcto
    Mientras fila < 1 o fila > N
        Escribir "Fila fuera de rango. Intente nuevamente:"
        Leer fila
    FinMientras
	
    // Buscar el valor m�ximo en esa fila
    maximo <- matriz[fila, 1]
    Para j <- 2 Hasta N
        Si matriz[fila, j] > maximo Entonces
            maximo <- matriz[fila, j]
        FinSi
    FinPara
	
    Escribir "El valor m�ximo en la fila ", fila, " es: ", maximo
	
FinAlgoritmo