Algoritmo AdivinaElNumero
    Definir numero_secreto, intento_usuario, i Como Entero
    
    // Generar n�mero aleatorio entre 1 y 100
    numero_secreto <- Aleatorio(1, 100)
    
    Para i <- 1 Hasta 5 Hacer
        Escribir "Intento ", i, "/5: Adivina el n�mero (1-100): "
        Leer intento_usuario
        
        Si intento_usuario < numero_secreto Entonces
            Escribir "El n�mero es M�S ALTO >:v"  // Indicaci�n clara
        Sino 
            Si intento_usuario > numero_secreto Entonces
                Escribir "El n�mero es M�S BAJO "  // Indicaci�n clara
            Sino
                Escribir "�Correcto! Adivinaste el n�mero :D"
                i <- 6  // Salir del ciclo
            FinSi
        FinSi
    FinPara
    
    Si intento_usuario <> numero_secreto Entonces
        Escribir "Lo siento, no adivinaste. El n�mero era ", numero_secreto
    FinSi
FinAlgoritmo