#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int a, b, c, d;
    printf("Informe 4 inteiros\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(b>c && d>a){
        if(c+d>a+b){
            if (c>0 && d>0){
                if(a%2==0){
                    printf("valores aceitos!!");
                }
            }
        }
    }

    else{
        printf("valores n aceitos");
    }

return 0;
}
