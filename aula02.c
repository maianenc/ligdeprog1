#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main () {
    float cat1, cat2;
    double hipot;
    double resultado1;
    double resultado2;
    printf("Informe os catetos\n");
    scanf("%f%f", &cat1, &cat2);
    resultado1 = cat1*cat1;
    resultado2 = cat2*cat2;
    hipot = sqrt(resultado1+resultado2);
    printf("resultado: %lf", hipot);

return 0;
}

