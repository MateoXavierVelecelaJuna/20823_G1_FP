/* UNIVERSIDAD DE LAS FUERZAS ARMADAS “ESPE
NOMBRE: ANTHONY CAMPOVERDE
EVALUACION 1; SEGUNDO PARCIAL
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numsec;
    int intento;
    int gano=0;
    int intento1=0, intento2=0, intento3=0, intento4=0, intento5=0; //guardamos

    srand(time(NULL));
    numsec=(rand()%100)+1; //99+1

    for(int i=1; i<=5; i++){
        printf("Intento %d:Ingresa un numero entre el 1 y 100: ",i);
        scanf("%d",&intento);
        if(i==1)intento1=intento;
        else if(i==2)intento2=intento;
        else if(i==3)intento3=intento;
        else if(i==4)intento4=intento;
        else if(i==5)intento5=intento;

        if(intento==numsec){
            printf("Adivinaste el numero\n");
            printf("Mensaje Secreto: Eres muy bueno/a adivinando numeros \n");
            gano=1;
            break;

        } else if(intento<numsec){
            printf("Muy bajo. \n");

        }else {
            printf("Muy alto. \n ");
        }

    }
    printf("Intentos realizados: \n");
    if (intento1)printf("1:%d\n",intento1);
    if (intento2)printf("2:%d\n",intento2);
    if (intento3)printf("3:%d\n",intento3);
    if (intento4)printf("4:%d\n",intento4);
    if (intento5)printf("5:%d\n",intento5);

    if(!gano){
        printf("No lograste adivinar el numero, el numero era: %d\n",numsec);
    }
return 0;
}
