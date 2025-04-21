#include <stdio.h>

int main (){

   
    float nota1, nota2, nota3;
    float media;

    printf("*** Digite a nota do seu aluno***\n");

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua média é: %.1f", media);

    return 0;

}