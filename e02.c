#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, t1=0, t2=1, proxTermo;
    printf("Insira aquantidade de termos\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        printf("%d", t1);
        proxTermo = t1+t2;
        t1=t2;
        t2=proxTermo;
    }


return 0;
}
