#include <stdio.h>
#include <math.h>

int main () {
    char operador;
    double n1, n2;
    printf("Esse programa � uma calculadora, por favor insira a opera��o e dois inteiros\n");
    printf("Insira o operador\n");
    scanf("%c", &operador);
    printf("Insira dois inteiros\n");
    scanf("%lf%lf", &n1, &n2);

    switch(operador){
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2);
        break;
    case '-':
        printf(".1lf - %.1lf = %.1lf", n1, n2, n1-n2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
        break;
    default:
        printf("Opera��o inv�lida!!!!");
    }


return 0;
}
