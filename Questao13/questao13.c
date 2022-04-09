//Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
//variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores após a efetivação do processamento da troca.

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Antes:\n A: %d\n B: %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Depois:\n A: %d\n B: %d\n", a, b);
    
    return 0;
}