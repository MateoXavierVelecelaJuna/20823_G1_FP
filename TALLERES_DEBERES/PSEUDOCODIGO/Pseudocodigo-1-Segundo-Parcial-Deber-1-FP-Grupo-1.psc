Algoritmo VectorConTerminoGeneral
    Definir n, i Como Entero
    Dimension vec[100]  // Índices van de 1 a 100 en PSeInt
    
    // Paso 1: Leer n
    Escribir "Ingrese el número de términos n (<= 100): "
    Leer n
    
    // Paso 2: Validar n
    Si n <= 0 O n > 100 Entonces
        Escribir "Error: n debe ser un entero positivo <= 100."
    Sino
        // Paso 3: Calcular términos y almacenar en vec (índices 1 a n)
        Para i <- 1 Hasta n Hacer
            vec[i] <- (i * i) + 3  // Usamos vec[i] en lugar de vec[i-1]
        FinPara
        
        // Paso 4: Mostrar el vector
        Escribir "El vector es:"
        Para i <- 1 Hasta n Hacer
            Escribir Sin Saltar vec[i], " "
        FinPara
        Escribir ""  // Salto de línea final
    FinSi
FinAlgoritmo
