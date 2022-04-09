//Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de
//dias trabalhados pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele
//trabalhou até 10 dias não tem direito à gratificação, se ele trabalhou acima de 10 dias e até 20 dias tem direito à gratificação de 20%, se ele trabalhou acima de 20 dias tem direito `a gratificação de 30%. Sempre sao descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>

int main(){
    int dias;
    float salario;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    if(dias < 10){
        salario = (50.25 * dias) * 0.9; // Multiplica por ) 0.9 por conta do imposto de renda
    } else if(dias >= 10 && dias <= 20){
        salario = ((50.25 * dias) * 1.2) * 0.9;
    } else if(dias > 20){
        salario = ((50.25 * dias) * 1.3) * 0.9;
    }
    printf("Seu salario no final das contas vai ser de R$%0.2f", salario);
    return 0;
}