/*Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, soma;
    float media_arit, media_geo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    soma = a + b + c;
    media_arit = ((float)soma) / 3;
    media_geo = pow(soma, 1.0 / 3);
    printf("MEDIA ARITMETICA: %0.2f\n", media_arit);
    printf("MEDIA GEOMETRICA: %0.2f\n", media_geo);
    return 0;
}