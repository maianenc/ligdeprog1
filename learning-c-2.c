#include <stdio.h>
#include <stdlib.h>

int main (void){
    char letra;
    printf("Deseja prosseguir: (S/N)?");
    letra = getchar();
    letra = toupper(letra);

    while ((letra != 'S') && (letra != 'N')){
        putch(7);
        letra = getchar();
        letra = toupper(letra);
    }

    printf("\nSua resposta foi %c\n", letra);

return 0;
}
