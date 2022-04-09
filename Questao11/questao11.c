// Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real.
// O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais que o usuário deseja converter.

#include <stdio.h>

int main(){
    float dolar, real, dolar_convert;

    printf("Cotacao do Dolar: $");
    scanf("%f", &dolar);
    printf("Reais a serem convertidos: R$");
    scanf("%f", &real);

    dolar_convert = real / dolar;

    printf("%0.2f reais sao %0.2f dolares.", real, dolar_convert);
}
