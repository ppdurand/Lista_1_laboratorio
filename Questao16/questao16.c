// Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
// necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
// liquido do professor.

#include <stdio.h>

int main(){
    int horas_trabalhadas, desc_inss;
    float hora_aula, salario_liquido, salario_bruto;

    printf("Valor da hora aula: ");
    scanf("%f", &hora_aula);
    printf("Horas Trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Porcentagem do desconto do INSS: ");
    scanf("%d", &desc_inss);

    salario_bruto = hora_aula * horas_trabalhadas;
    salario_liquido = salario_bruto - (salario_bruto * (((float)desc_inss) / 100));

    printf("O seu salario bruto foi R$ %0.2f, mas o salario liquido foi R$ %0.2f", salario_bruto, salario_liquido);
    return 0;
}