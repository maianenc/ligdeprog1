#include <stdio.h>
#include <math.h>

int main () {
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);

    int raiz;
    raiz = sqrt(x);

    if (raiz*raiz==x){
        printf("quadrado perfeito");
    }
    else {
        printf("nao tem raiz exata");
    }





return 0;
}
