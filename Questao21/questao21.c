/*Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do segundo. 
Obs.: Não utilizar estrutura de decisão if.*/

#include <stdio.h>

int main(){
    int n1, n2; 
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    switch (n1 % n2){
    case (0):
        printf("O primeiro numero e multiplo do segundo numero");
        break;
    
    default:
        printf("O primeiro numero nao e multiplo do segundo numero");
        break;
    }
    return 0;
}
