#include <stdio.h>




int main(){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


printf ("Coloque o primeiro numero: \n");
scanf ("%d", &numero1);
printf ("Coloque o segundo numero: \n");
scanf ("%d", &numero2);

soma = numero1 + numero2;

subtracao = numero1 - numero2;

multiplicacao = numero1 * numero2;

divisao = numero1 / numero2;

printf ("A Soma é: %d\n", soma);
printf ("A Subtração é: %d\n", subtracao);
printf ("A Divisão é: %d\n", divisao);
printf ("A multiplicação é: %d\n", multiplicacao);
}
