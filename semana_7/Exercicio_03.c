/*
Faça um programa que leia, pelo TECLADO, DOIS (2) valores INTEIROS e chame uma função que receba estas DUAS variáveis e TROQUE o seu conteúdo, ou seja, esta função é chamada passando DUAS variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A. Após a troca, as variáveis atualizadas devem ser impressas na função main(). Vale ressaltar que ponteiros devem ser utilizados para resolver o exercício.
*/

#include <stdio.h>

void swap(int *pointer1, int *pointer2){
    int aux;
    aux = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = aux;
}

void main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    swap(&num1,&num2);
    printf("%i\n%i\n", num1, num2);

}