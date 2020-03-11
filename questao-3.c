#include <stdio.h>

int main(void){
    int a, b, c;
    printf("insira tres inteiros\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n\n\n\n");

    if (a>b && a>c){
        printf("%d", a);
    }

    else if (b>a && b>c){
        printf("%d", b);
    }

    else if (c>a && c>b){
        printf("%d", c);
    }


return 0;
}
