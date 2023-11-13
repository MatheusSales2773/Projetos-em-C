/* 1. Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores
lidos. */

#include<stdio.h>

int main(){
    int valor1, valor2, valor3, soma = 0;
    printf("informe o valor1: ");
    scanf("%d", &valor1);

    printf("informe o valor2: ");
    scanf("%d", &valor2);

    printf("informe o valor3: ");
    scanf("%d", &valor3);

    soma = (valor1 * valor2) + (valor2 * valor2) + (valor3 * valor3);
    printf("A soma dos quadrados sera %d", soma);

    
    return 0;
}