//Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
// fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(){
    float comprimento, altura, largura, volume, volume_metro;

    printf("Comprimento em centimetros: ");
    scanf("%f", &comprimento);
    printf("Largura em centimetros: ");
    scanf("%f", &largura);
    printf("Altura em centimetros: ");
    scanf("%f", &altura);

    volume = altura * largura * comprimento;
    volume_metro = volume / 100;

    printf("O volume da caixa e %0.2f cm3 ou %0.2f m3", volume, volume_metro);
    return 0;
}
