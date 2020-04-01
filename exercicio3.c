#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
   float renda;
   float porcen;
   float resultado;
   printf("informe sua renda \n\n\n");
   scanf("%f", &renda);

   if(renda<=2000){
    printf("isento!");
    }
   else if(renda>2000 && renda<=3000){
    porcen = (renda*8)/100;
    resultado = porcen;
    printf("%.1lf", resultado);
   }
    else if(renda>3000 && renda<=4500){
    porcen = (renda*18)/100;
    resultado = porcen;
    printf("%.1lf", resultado);
   }
    else if(renda>4500){
    porcen = (renda*28)/100;
    resultado = porcen;
    printf("%.1lf", resultado);
   }



return 0;
}
