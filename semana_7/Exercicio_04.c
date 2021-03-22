/*
Faça um programa que leia, pelo TECLADO, DOIS valores INTEIROS e chame uma função que receba estes DOIS valores de ENTRADA e RETORNE o MAIOR valor na PRIMEIRA VARIÁVEL e o MENOR valor na SEGUNDA VARIÁVEL. Imprima, através da função main(), o conteúdo das DUAS VARIÁVEIS na tela.
*/

#include <stdio.h>

void swap(int *pointer1, int *pointer2){
    int aux;
    if(*pointer1 < *pointer2) {
        aux = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = aux;
    }
}

void main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    swap(&num1,&num2);
    printf("%i\n%i\n", num1, num2);
}