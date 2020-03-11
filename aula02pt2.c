#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a;
    printf("Informe um inteiros\n");
    scanf("%d", &a);
    if (a%3==0 && a%5==0){
        printf("eh divisivel\n");
    }
    else {
        printf("nao eh divisivel\n");
    }
return 0;
}
