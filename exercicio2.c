#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int n;
    printf("Informe um inteiro\n\n\n\n");
    scanf("%d", &n);

    if (n>0 && n<=25){
        printf("Intervalo [0,25]");
        }
    if (n>25 && n<=50){
        printf("Intervalo[25,50]");
        }
    if (n>50 && n<=75){
        printf("Intervalo [50,75]");
        }
    if (n>75 && n<=100){
        printf("Intervalo [75,100]");
        }
    else{
        printf("Fora de intervalo!!");
        }



return 0;
}
