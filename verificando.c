#include <stdio.h>

int main (void) {
    char x;
    printf("Insira um caractere\n");
    scanf("%c", &x);

    int x_aux;
    x_aux = x;

    if(x_aux>64 && x_aux<91){
        printf("eh letra\n");
    }

    else if (x_aux>96 && x_aux<123){
        printf("eh letra\n");
    }

    else if (x_aux>47 && x_aux<58){
        printf("eh numero\n");
    }

    else {
        printf("eh caractere especial\n");
    }



return 0;
}
