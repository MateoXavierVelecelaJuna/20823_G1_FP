//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 1; U2 T1
//VECTOR CON TERMINO GENERAL

Algoritmo VectorConTerminoGeneral
    Definir n, i Como Entero
    Dimension vec[100]  
    

    Escribir "Ingrese el número de términos n (<= 100): "
    Leer n
    

    Si n <= 0 O n > 100 Entonces
        Escribir "Error: n debe ser un entero positivo <= 100."
    Sino
      
        Para i <- 1 Hasta n Hacer
            vec[i] <- (i * i) + 3  
        FinPara
        

        Escribir "El vector es:"
        Para i <- 1 Hasta n Hacer
            Escribir Sin Saltar vec[i], " "
        FinPara
        Escribir ""  
    FinSi
FinAlgoritmo
