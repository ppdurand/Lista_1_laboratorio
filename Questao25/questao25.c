// Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.

#include <stdio.h>

int main(){
    int segundos, minutos, horas;
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos -= horas * 3600;
    minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("HORAS: %d\n", horas);
    printf("MINUTOS: %d\n", minutos);
    printf("SEGUNDOS: %d\n", segundos);
    
    return 0;
}