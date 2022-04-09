/* Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo).
Não utilize estrutura de decisão if. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O modulo vai ser de %d", abs(numero));
    return 0;
}