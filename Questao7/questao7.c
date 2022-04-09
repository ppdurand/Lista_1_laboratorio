// Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Informe as horas: ");
    scanf("%d", &horas);
    printf("Informe os minutos: ");
    scanf("%d", &minutos);
    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    segundos += (horas * 3600) + (minutos * 60);

    printf("Total de segundos: %ds", segundos);

    return 0;
}
