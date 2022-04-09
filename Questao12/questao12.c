//Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima  a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

#include <stdio.h>

int main(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("SOMA: %d\n", a + b);
    printf("PRODUTO: %d\n", a * b);
    printf("DIFERENCA: %d\n", a - b);
    printf("QUOCIENTE: %0.2f\n", ((float)a) / ((float) b));
    printf("RESTO: %d\n", a % b);

    return 0;
}
