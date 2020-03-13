#include <stdio.h>

int main (void) {
    int i;
    int n;
    printf("Insira um número\n");
    scanf("%d", &n);
    for (i=1; i<n; ++i){
        printf("%d", i);
    }

return 0;
}
