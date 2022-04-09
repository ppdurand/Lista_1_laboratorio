//Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
//Fahrenheit. A fórmula de versão  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
//temperatura em Celsius.

#include <stdio.h>

int main(){
    float C, F;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Temperatura em Fahrenheit: %0.1f", F);
    return 0;
}