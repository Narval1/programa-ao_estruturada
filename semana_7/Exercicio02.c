/*
Escreva um programa que contenha DUAS variáveis inteiras (x=2 e y=5). Compare seus ENDEREÇOS e exiba a letra "A" para o MAIOR endereço e "B" para o MENOR.

Por exemplo, se o endereço de x for 0x7ffcdc3e05c0 e de y for 0x7ffcdc3e05c4, tem-se:

SAÍDA:

B
*/

#include <stdio.h>

void main(){
    int x = 2, y = 5;
    if(&x > &y) printf("A\n");
    else printf("B\n");
}