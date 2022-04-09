/* Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia e sua  ́area. Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou instruções) printf e use o especificador de convers ̃ao %f. */

#include <stdio.h>

int main(){
    float raio, area, comp_circu, diametro, pi = 3.14159;

    printf("Diga o raio do circulo: ");
    scanf("%f", &raio);

    diametro = raio * 2;
    comp_circu = 2 * pi * raio;
    area = pi * (raio * raio);

    printf("DIAMETRO: %0.2f\nComprimento do Circulo: %0.2f\nAREA: %0.2f", diametro, comp_circu, area);
    return 0;
}