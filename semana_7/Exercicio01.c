/*
Escreva um programa que declare um inteiro (x = 3), um float (y = 3.4) e um char (z = 'A'), 
e PONTEIROS para inteiro, float, e char. ASSOCIE as variáveis aos ponteiros (use &). 
MODIFIQUE , pelo TECLADO, os valores de CADA variável usando os PONTEIROS. 
IMPRIMA os valores das variáveis ANTES e APÓS a modificação.
*/

#include <stdio.h>

void main(){
    int *pointerx = NULL, x = 3;
    float *pointery = NULL, y = 3.4;
    char *pointerz = NULL, z = 'A';

    pointerx = &x;
    pointery = &y;
    pointerz = &z;

    scanf("%i%f %c", &(*pointerx), &(*pointery), &(*pointerz));
    printf("Antes:\nx = 3\ny = 3.400000\nz = A\n");
    printf("Depois:\nx = %i\ny = %f\nz = %c\n", x, y, z);
}