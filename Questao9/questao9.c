// Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores
// sucessor e antecessor.

#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Antecessor de %d: %d\nSucessor de %d: %d", numero, numero - 1, numero, numero + 1);

    return 0;
}
