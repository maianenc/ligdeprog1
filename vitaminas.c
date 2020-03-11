#include <stdio.h>

int main (void) {
    char a, d, e, k, c;
    char vitamina;
    printf("Informe uma letra equivalente a vitaminas EM MINUSCULO. \n");
    scanf("%c", &vitamina);

    switch(vitamina){
        case 'a':
            printf("Presente nos alimentos amarelo-alaranjados, nas folhas verdes escuras e sob a forma de retinol em alimentos de origem animal.. Alguns exemplos são cenoura, manga, moranga, mamão, espinafre, brócolis, rúcula, agrião, gema do ovo, leite, fígado, entre outros.");

        case 'd':
            printf("Presente peixes gordurosos, como sardinhas, cavala, atum, ovos, alimentos fortificados como margarina e alguns cereais matinais. Ela é muito importante para o crescimento e manutenção dos ossos, porque controla a absorção de cálcio e fósforo, que são essenciais ao metabolismo do osso.");

        case 'e':
            printf("Presente no gérmem de trigo, óleo de gérmem de trigo, óleo de soja, arroz, algodão, milho e girassol, gema de ovo, nozes, vegetais folhosos e legumes. É um inportante antioxidante, atua na prevenção do envelhecimento precoce das células, estimula o sistema imunológico, reduz o risco de cataratas, protetor contar doenças cardiovasculares, previne o câncer e doenças da pele. Sua deficiência em humanos é rara, ocorrendo apenas em bebês prematuros e em indivíduos com síndrome de má-absorção.");

        case 'k':
            printf("Presente na alface, couve, couve-flor, espinafre, repolho, leite, os vegetais de folhas verde-escuro são as melhores fontes desta vitamina. A vitamina K está envolvida na coagulação do sangue e sua deficiência acarreta ferimentos e sangramento excessivo.");

        case 'c':
            printf("Presente especialmente nas frutas cítricas, kiwi, melão, laranja, goiaba, acerola, manga, morango, tomate, couve, agrião, tangerina. É muito importante para o crescimento, desenvolvimento, ajuda no processo de cicatrização, estimula o sistema imunológico (ajudando a previnir resfriados), estimula a síntese de colágeno, mantendo a elasticidade e a integridade da pele, importante para ossos, dentes, músculos e tendões.");

    }






return 0;
}
