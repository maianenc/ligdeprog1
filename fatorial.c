#include <stdio.h>
#include <math.h>

int main(){
    int n, fatorial;
    printf("Insira um inteiro para calcular o fatorial: \n");
    scanf("%d", &n);
    for (fatorial=1; n>1; n=n-1){
        fatorial = fatorial * n;
    }
printf("resultado= %d", fatorial);

return 0;
}
