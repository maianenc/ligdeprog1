#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
    int i, j, n;
    printf("Informe um inteiro: \n");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }


return 0;
}
