Algoritmo AdivinaElNumero
    Definir numero_secreto, intento_usuario, i Como Entero
    
    // Generar número aleatorio entre 1 y 100
    numero_secreto <- Aleatorio(1, 100)
    
    Para i <- 1 Hasta 5 Hacer
        Escribir "Intento ", i, "/5: Adivina el número (1-100): "
        Leer intento_usuario
        
        Si intento_usuario < numero_secreto Entonces
            Escribir "El número es MÁS ALTO >:v"  // Indicación clara
        Sino 
            Si intento_usuario > numero_secreto Entonces
                Escribir "El número es MÁS BAJO "  // Indicación clara
            Sino
                Escribir "¡Correcto! Adivinaste el número :D"
                i <- 6  // Salir del ciclo
            FinSi
        FinSi
    FinPara
    
    Si intento_usuario <> numero_secreto Entonces
        Escribir "Lo siento, no adivinaste. El número era ", numero_secreto
    FinSi
FinAlgoritmo