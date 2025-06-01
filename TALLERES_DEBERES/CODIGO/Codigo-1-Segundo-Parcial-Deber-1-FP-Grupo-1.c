#include <stdio.h>
#include <stdlib.h>

int main (){
   int n;
   int vec[100];


   printf("Ingrese el numero de terminos n (>=100): ");
   scanf("%d", &n);

   if(n<=0 || n>100){
    printf("Error, el numero ingresado no cumple con la condicion indicada (>=100). \n");
    return 1;
   }
   for (int i=1; i<=n ; i++){
    vec[i-1]=i*i+3;
   }

   printf("El vector es:\n");
   for (int j=0; j<n; j++){
    printf("%d ", vec[j]);
   }
   printf("\n");

   return 0;

}
