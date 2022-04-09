/*Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores bin ́arios.*/

#include <stdio.h>

int main(){
    int x, n, produto;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    produto = x * (2 << (n-1));
    printf("PRODUTO: %d", produto);
    return 0;
}