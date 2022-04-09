// Sabendo que os argumentos da função ”printf” podem ser expressões (a+b, a/b, a*b...), e não somente
// argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
// seu meio.

#include <stdio.h>
#include <locale.h>

int main(){
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);

    setlocale(LC_ALL,"");
    printf("O valor recebido foi %d, o seu triplo e %d , seu quadrado e %d e a metade e %0.1f", x, x * 3, x * x, ((float)x )/ 2);

    return 0;
}
