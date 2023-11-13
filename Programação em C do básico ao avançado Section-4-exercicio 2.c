 /*Leia quatro notas, calcule a média aritmética e imprima o resultado. */

 #include <stdio.h>

 int main(){
    
    float nota1, nota2, nota3, nota4, media = 0;
    
    printf("informe a nota1: ");
    scanf("%f", &nota1);
    printf("informe a nota2: ");
    scanf("%f", &nota2);
    printf("informe a nota3: ");
    scanf("%f", &nota3);
    printf("informe a nota4: ");
    scanf("%f", &nota4);

   media = (nota1 + nota2 + nota3 + nota4) / 4; 
    printf("A media aritmetica vai ser: %.2f", media);

    return 0;
 }