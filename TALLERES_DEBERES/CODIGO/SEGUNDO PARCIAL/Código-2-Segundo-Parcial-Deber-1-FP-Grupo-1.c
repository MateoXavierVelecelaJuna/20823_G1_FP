//Universidad de las fuerzas Armadas "ESPE"
//GRUPO 1: ALEXANDER ALVEAR, ANTHONY CAMPOVERDE, MATEO VELECELA
//CODIGO 2; U2 T1
//VECTOR CON TERMINO GENERAL


#include <stdio.h>
#include <stdlib.h>

int main(){
  int vec[]= {4,7,12,19,28,46,9,6,78,89,21,95,1,73,10};
  int size= 15;

  int num1,num2,flag1=0,flag2=0;

  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  for(int i=0; i<size; i++){
    if (vec[i]== num1){
        flag1=1;
    }
    if (vec[i]==num2){
        flag2=1;
    }
  }
  if(flag1 && flag2){
    printf("Ambos numeros estan en el vector. \n");
  } else{
      printf("Al menos uno de los numeros no esta en el vector. \n");
  }
return 0;

}
