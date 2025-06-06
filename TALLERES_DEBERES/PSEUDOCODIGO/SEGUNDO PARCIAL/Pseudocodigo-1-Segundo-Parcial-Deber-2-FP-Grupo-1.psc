Algoritmo Adivinarsumamatriz
    
    Definir i, j, suma, intento Como Entero
    Definir matriz Como Entero
    Dimension matriz[10,10]
	
    
    Para i <- 1 Hasta 10   //for para ingreso de valores
        Para j <- 1 Hasta 10                   //Iniciamos desde 1 porque PseInt no inicializa en 0 como en C
            Escribir "Ingrese valor para la posición [", i, "][", j, "]:"
            Leer matriz[i,j]   //Almacenamos sus valores dependiendo la posicion
        FinPara
    FinPara
	
    suma <- 0  //Iniciamos suma en 0
    Para i <- 1 Hasta 10
        Para j <- 1 Hasta 10
            suma <- suma + matriz[i,j] //for para la sumka acumulada de todos los elementos
        FinPara
    FinPara
	
    Escribir "¿Cuál crees que es la suma total de los elementos?" //imprimimos adivinanza 
    Leer intento
	
    Si intento = suma Entonces
        Escribir "¡Correcto! Adivinaste la suma."
    SiNo
        Escribir "Incorrecto. La suma correcta era: ", suma
    FinSi
FinAlgoritmo

