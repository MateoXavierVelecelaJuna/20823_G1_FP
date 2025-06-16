Proceso CalculadoraDeMatrices
	Definir matrizA, matrizB, resultado, temp Como Entero
	Dimension matrizA[10,10], matrizB[10,10], resultado[10,10], temp[10,10]
	Definir n, opcion, i, j, k, escalar, potencia, p Como Entero
	
	Repetir
		Escribir "===============GRUPO 1============="
		Escribir "===========MENU OPERADORES========="
		Escribir "=======FUNDA. DE PROGRAMACION======"
		Escribir ""
		Escribir "Calculadora de Matrices NxN (max 10x10)"
		Escribir "Ingrese el tamaño N de las matrices (1 a 10): "
		Leer n
		Si n < 1 O n > 10 Entonces
			Escribir "Error: El valor debe estar entre 1 y 10, intente de nuevo."
		FinSi
	Hasta Que n >= 1 Y n <= 10
	
	Repetir
		Escribir ""
		Escribir "Menu:"
		Escribir "1. Sumar matrices"
		Escribir "2. Restar matrices"
		Escribir "3. Multiplicar matrices"
		Escribir "4. Potencia de una matriz"
		Escribir "5. Multiplicar matriz por escalar"
		Escribir "0. Salir"
		Escribir "Seleccione una opcion: "
		Leer opcion
		
		Segun opcion Hacer
			1:
				// Leer matriz A
				Escribir "Ingrese los elementos de la matriz A:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "A[", i, "][", j, "]: "
						Leer matrizA[i,j]
					FinPara
				FinPara
				
				// Leer matriz B
				Escribir "Ingrese los elementos de la matriz B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "B[", i, "][", j, "]: "
						Leer matrizB[i,j]
					FinPara
				FinPara
				
				// Sumar matrices
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						resultado[i,j] <- matrizA[i,j] + matrizB[i,j]
					FinPara
				FinPara
				
				Escribir "Resultado A + B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir Sin Saltar resultado[i,j], " "
					FinPara
					Escribir ""
				FinPara
				
			2:
				// Leer matrices
				Escribir "Ingrese los elementos de la matriz A:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "A[", i, "][", j, "]: "
						Leer matrizA[i,j]
					FinPara
				FinPara
				
				Escribir "Ingrese los elementos de la matriz B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "B[", i, "][", j, "]: "
						Leer matrizB[i,j]
					FinPara
				FinPara
				
				// Restar matrices
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						resultado[i,j] <- matrizA[i,j] - matrizB[i,j]
					FinPara
				FinPara
				
				Escribir "Resultado A - B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir Sin Saltar resultado[i,j], " "
					FinPara
					Escribir ""
				FinPara
				
			3:
				// Leer matrices
				Escribir "Ingrese los elementos de la matriz A:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "A[", i, "][", j, "]: "
						Leer matrizA[i,j]
					FinPara
				FinPara
				
				Escribir "Ingrese los elementos de la matriz B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "B[", i, "][", j, "]: "
						Leer matrizB[i,j]
					FinPara
				FinPara
				
				// Multiplicar matrices
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						resultado[i,j] <- 0
						Para k <- 1 Hasta n
							resultado[i,j] <- resultado[i,j] + matrizA[i,k] * matrizB[k,j]
						FinPara
					FinPara
				FinPara
				
				Escribir "Resultado A * B:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir Sin Saltar resultado[i,j], " "
					FinPara
					Escribir ""
				FinPara
				
			4:
				// Leer matriz y potencia
				Escribir "Ingrese los elementos de la matriz A:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "A[", i, "][", j, "]: "
						Leer matrizA[i,j]
						resultado[i,j] <- matrizA[i,j]
					FinPara
				FinPara
				
				Escribir "Ingrese la potencia (entero positivo): "
				Leer potencia
				
				Para p <- 2 Hasta potencia
					// Copiar resultado actual en temp
					Para i <- 1 Hasta n
						Para j <- 1 Hasta n
							temp[i,j] <- resultado[i,j]
						FinPara
					FinPara
					
					// Multiplicar temp * matrizA
					Para i <- 1 Hasta n
						Para j <- 1 Hasta n
							resultado[i,j] <- 0
							Para k <- 1 Hasta n
								resultado[i,j] <- resultado[i,j] + temp[i,k] * matrizA[k,j]
							FinPara
						FinPara
					FinPara
				FinPara
				
				Escribir "Resultado A^", potencia, ":"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir Sin Saltar resultado[i,j], " "
					FinPara
					Escribir ""
				FinPara
				
			5:
				// Leer matriz y escalar
				Escribir "Ingrese los elementos de la matriz A:"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir "A[", i, "][", j, "]: "
						Leer matrizA[i,j]
					FinPara
				FinPara
				
				Escribir "Ingrese el escalar: "
				Leer escalar
				
				// Multiplicación por escalar
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						resultado[i,j] <- matrizA[i,j] * escalar
					FinPara
				FinPara
				
				Escribir "Resultado A * ", escalar, ":"
				Para i <- 1 Hasta n
					Para j <- 1 Hasta n
						Escribir Sin Saltar resultado[i,j], " "
					FinPara
					Escribir ""
				FinPara
				
			0:
				Escribir "Saliendo del programa..."
				
			De Otro Modo:
				Escribir "Opción no válida."
				
		FinSegun
	Hasta Que opcion = 0
FinProceso
