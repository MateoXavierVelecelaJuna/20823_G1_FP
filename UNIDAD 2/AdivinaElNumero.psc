Algoritmo AdivinaElNumero
    Definir numero_secreto, intento_usuario, i Como Entero
    

    numero_secreto <- Aleatorio(1, 100)
    
    Para i <- 1 Hasta 5 Hacer
        Escribir "Intento ", i, "/5: Adivina el numero (1-100): "
        Leer intento_usuario
        
        Si intento_usuario < numero_secreto Entonces
            Escribir "El numero es MAS ALTO >:v"  
        Sino 
            Si intento_usuario > numero_secreto Entonces
                Escribir "El numero es MAS BAJO "  
            Sino
                Escribir " correcto! Adivinaste el numero :D"
                i <- 6  
            FinSi
        FinSi
    FinPara
    
    Si intento_usuario <> numero_secreto Entonces
        Escribir "Lo siento, no adivinaste. El numero era ", numero_secreto
    FinSi
FinAlgoritmo
