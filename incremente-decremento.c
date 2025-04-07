#include <stdio.h>

int main (){
    /*
        Incremento (++)
        Pré incremento ++a
        Pos incremento a++
        Decremento (--)
        Pré Decremento --a
        Pos decremento a--
    */

    int numero1 = 1, resultado;

    printf("antes do incremento: %d\n", numero1);

    resultado = numero1++;
    
    printf("apos - pos-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("apos -pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("apos -pos-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("apos -pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
 //printf("Apos o incremento: %d\n", numero1);
 //numero1--;
 //printf("Apos o Decremento: %d\n", numero1);
}