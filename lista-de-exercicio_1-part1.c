/* Questão 1 da Lista de Exercícios de LP1 */
#include <stdio.h>
#include <math.h>

int main (void) {
    int x1, y1, x2, y2;
    int quadr_1, quadr_2;
    int subt1, subt2;
    int soma;
    float distancia;

    printf("Insira as coordenadas dos pontos P1 e P2\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    subt1 = x2 - x1;
    subt2 = y2 - x2;
    quadr_1 = pow(subt1, 2);
    quadr_2 = pow(subt2, 2);
    soma = quadr_1 + quadr_2;
    distancia = sqrt(soma);

    printf("A distancia eh: %.1lf", distancia);


return 0;
}
