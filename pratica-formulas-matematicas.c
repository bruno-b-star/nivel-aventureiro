#include <stdio.h>

int main(){

        
        char nome[50];
        float nota1, nota2, nota3, media;

        printf("Digite o nome do aluno: ");
        fgets(nome, 50, stdin); 

        printf ("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf ("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf ("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = nota1 += nota2 += nota3 /= 3;

        printf("\nAluno: %s", nome);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
        printf("Média final: %.2f\n", media);

        return 0;
}