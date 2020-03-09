#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    printf("Informe os lados do triangulo");
    scanf("%d%d%d", &a, &b, &c);

    if (a+b>=c) {
        if (a==b && a==c) {
            printf("equilatero");
        }
        else if (a==b && a!=c){
            printf("isosceles");
        }

        else if (a!=b && a==c) {
            printf("escaleno");
        }

        else if (a==c && a!=b){
            printf("escaleno");
        }
    }

    if (a+c>=b) {
        if (a==b && a==c){
            printf("equilatero");
        }
        else if (a==b && a!=c){
            printf("isosceles");
        }

        else if (a!=b && a==c){
            printf("isosceles");
        }

        else if (a!=b && a!=c){
            printf("escaleno");
        }
    }

    if (b+c>=a){
        if (a==b && a==c){
            printf("equilatero");
        }

        else if (a==b && a!=c){
            printf("isosceles");
        }

        else if (a!=b && a==c){
            printf("isosceles");
        }

        else if (a!=b && a!= c){
            printf("equilatero");
        }

    }

    else {
        printf("nao eh triangulo");
    }




return 0;
}
