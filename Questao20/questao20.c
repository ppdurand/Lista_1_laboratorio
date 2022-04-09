/*Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/

#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    switch (numero % 2){
    case (0):
        printf("%d e um numero par", numero);
        break;
    
    default:
        printf("%d e um numero impar", numero);
    }
    return 0;
}