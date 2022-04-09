/*Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.*/

#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero na base decimal: ");
    scanf("%d", &numero);

    printf("HEXADECIMAL: %x\n", numero);
    printf("OCTAL: %o\n", numero);

    return 0;
}