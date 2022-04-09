/* Faça um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.*/

#include <stdio.h>

int main(){
    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Numero digitado: %0.1f", numero);
    return 0;
}