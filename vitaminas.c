#include <stdio.h>

int main (void) {
    char a, d, e, k, c;
    char vitamina;
    printf("Informe uma letra equivalente a vitaminas EM MINUSCULO. \n");
    scanf("%c", &vitamina);

    switch(vitamina){
        case 'a':
            printf("Presente nos alimentos amarelo-alaranjados, nas folhas verdes escuras e sob a forma de retinol em alimentos de origem animal.. Alguns exemplos s�o cenoura, manga, moranga, mam�o, espinafre, br�colis, r�cula, agri�o, gema do ovo, leite, f�gado, entre outros.");

        case 'd':
            printf("Presente peixes gordurosos, como sardinhas, cavala, atum, ovos, alimentos fortificados como margarina e alguns cereais matinais. Ela � muito importante para o crescimento e manuten��o dos ossos, porque controla a absor��o de c�lcio e f�sforo, que s�o essenciais ao metabolismo do osso.");

        case 'e':
            printf("Presente no g�rmem de trigo, �leo de g�rmem de trigo, �leo de soja, arroz, algod�o, milho e girassol, gema de ovo, nozes, vegetais folhosos e legumes. � um inportante antioxidante, atua na preven��o do envelhecimento precoce das c�lulas, estimula o sistema imunol�gico, reduz o risco de cataratas, protetor contar doen�as cardiovasculares, previne o c�ncer e doen�as da pele. Sua defici�ncia em humanos � rara, ocorrendo apenas em beb�s prematuros e em indiv�duos com s�ndrome de m�-absor��o.");

        case 'k':
            printf("Presente na alface, couve, couve-flor, espinafre, repolho, leite, os vegetais de folhas verde-escuro s�o as melhores fontes desta vitamina. A vitamina K est� envolvida na coagula��o do sangue e sua defici�ncia acarreta ferimentos e sangramento excessivo.");

        case 'c':
            printf("Presente especialmente nas frutas c�tricas, kiwi, mel�o, laranja, goiaba, acerola, manga, morango, tomate, couve, agri�o, tangerina. � muito importante para o crescimento, desenvolvimento, ajuda no processo de cicatriza��o, estimula o sistema imunol�gico (ajudando a previnir resfriados), estimula a s�ntese de col�geno, mantendo a elasticidade e a integridade da pele, importante para ossos, dentes, m�sculos e tend�es.");

    }






return 0;
}
