#include <stdio.h>

int main (void){
    float temperatura;
    printf("Informe a temperatura\n");
    scanf("%f", &temperatura);

    if (temperatura<0) {
        printf("tempo congelante");
    }

    else if (temperatura>0 && temperatura<10){
        printf("Tempo muito frio");
    }

    else if (temperatura>10 && temperatura<20){
        printf("Tempo normal");
    }

    else if (temperatura>20 && temperatura<30){
        printf("tempo normal");
    }

    else if (temperatura>30 && temperatura<40){
        printf("esta quente");
    }

    else if (temperatura>=40){
        printf("muito quente!!");
    }

return 0;
}
