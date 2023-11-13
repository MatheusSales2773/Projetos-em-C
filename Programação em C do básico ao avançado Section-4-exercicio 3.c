/* 3. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. 
Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido. */

#include <stdio.h>

int main(){
    float aposta1, aposta2, aposta3, total_de_apostas = 0;
    float premio = 0;
    float porcentagem1, porcentagem2, porcentagem3, total_de_porcentagem = 0;
    float premio1, premio2, premio3, total_de_premios = 0;

    printf ("Informe o valor da aposta do apostador 1: ");
    scanf ("%f", &aposta1);

    printf ("Informe o valor da aposta do apostador 2: ");
    scanf ("%f", &aposta2);

    printf ("Informe o valor da aposta do apostador 3: ");
    scanf ("%f", &aposta3);

    printf ("Informe o valor do premio: ");
    scanf ("%f", &premio);

    total_de_apostas = (float)(aposta1 + aposta2 + aposta3);
    printf ("o total de apostas foi de %.2f\n", total_de_apostas);

    porcentagem1 = (float) (aposta1 / total_de_apostas);
    porcentagem2 = (float) (aposta2 / total_de_apostas);
    porcentagem3 = (float) (aposta3 / total_de_apostas);
    total_de_porcentagem = (float) (porcentagem1 + porcentagem2 + porcentagem3);
    printf("O total de porcentagens sera: %.2f\n", total_de_porcentagem);

    premio1 = (float) (premio * porcentagem1);
    premio2 = (float) (premio * porcentagem2);
    premio3 = (float) (premio * porcentagem3);
    total_de_premios = (float) (premio1 + premio2 + premio3);
    printf("O total de premios vai ser %.2f\n", total_de_premios);

    printf("Apostador 1 apostou %.2f que corresponde a %2.f e devera receber o premio de %.2f\n", aposta1, porcentagem1, premio1);
    printf("Apostador 2 apostou %.2f que corresponde a %2.f e devera receber o premio de %.2f\n", aposta2, porcentagem2, premio2);
    printf("Apostador 3 apostou %.2f que corresponde a %2.f e devera receber o premio de %.2f\n", aposta3, porcentagem3, premio3);
    
    return 0;
}