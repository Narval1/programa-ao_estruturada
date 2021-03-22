/*
Implemente um algoritmo que contenha uma função que permita passar por parâmetro DOIS números inteiros A e B, lidos pelo TECLADO. A função deverá calcular a SOMA entre estes DOIS números e armazenar o resultado na variável A. Esta função NÃO deverá possuir retorno, mas deverá MODIFICAR o valor do PRIMEIRO PARÂMETRO. Imprima os valores de A e B na função main().
*/

#include <stdio.h>

void sum(int *pointer1,int *pointer2){
    *pointer1 = *pointer1 + *pointer2;
}

void main() {
    int num1, num2;
    scanf("%i%i", &num1, &num2);
    sum(&num1, &num2);
    printf("%i\n%i\n", num1,num2);
}