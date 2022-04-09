// Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
// pago, considerando que o restaurante cobra 10% de taxa para o garçom.

#include <stdio.h>

int main(){
    float valor_inicial, valor_total;
    printf("Informe o valor da sua conta: ");
    scanf("%f", &valor_inicial);

    valor_total = valor_inicial + (valor_inicial * 0.1);
    printf("Com os 10 porcento do garcom, a conta fica R$ %0.2f", valor_total);

    return 0;
}
