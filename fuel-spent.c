#include <stdio.h>
#include <math.h>

int main (void){
    int km, h;
    float distancia, litros;
    printf("Insira km e h\n\n");
    scanf("%d%d", &km, &h);
    distancia = km * h;
    litros = distancia/12;
    printf("\nA quantidade de litros necessaria eh: %lf", litros);

return 0;
}
