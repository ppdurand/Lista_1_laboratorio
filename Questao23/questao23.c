/*Escreva um programa que receba a entrada de um n ́umero de três dígitos, separe o número em seus
dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/

#include <stdio.h>

int main(){
    int numero, centena, dezena, unidade;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    numero -= centena * 100;
    dezena = numero / 10;
    numero -= dezena * 10;
    unidade = numero;
    
    printf("O numero invertido e: %d%d%d", unidade, dezena, centena);
    return 0;
}
