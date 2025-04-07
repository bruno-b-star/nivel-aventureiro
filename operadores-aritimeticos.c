#include <stdio.h>

int main (){
    /*
        Atribuição Simples (=)
        Atribuição soma (+=)
        Atribuição Subtração (-=)
        Atribuição Multiplicação (*=)
        Atribuição Divisãp (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("resultadp: %d\n", resultado);

    resultado += 20;
    printf("resultadp: %d\n", resultado);

    resultado -= numero1;
    printf("resultadp: %d\n", resultado);

    resultado *= 5;
    printf("resultadp: %d\n", resultado);

    resultado /= 2;
    printf("resultadp: %d\n", resultado);
}