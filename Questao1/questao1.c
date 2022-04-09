// Diga a ordem de cálculo dos operadores em cada uma das instrucoes em C a seguir e mostre o valor
// de x depois que cada instru ̧c ̃ao for executada.
// • x = 7 + 3*6/2-l
// • x = 2%2 + 2*2-2/2;
// • x = (3 * 9 * (3 + (9*3/ (3) ) ) );

#include <stdio.h>

int main(){
    int x;
    printf("x = 7 + 3 * ((6 / 2) - 1)\n");
    printf("Primeiro: 6 / 2 = 3\nSegundo:3 - 1 = 2\nTerceiro: 3 * 2 = 6\nQuarta: 7 + 6 = 13\n");
    x = 7 + 3 * ((6 / 2) - 1);
    printf("Resultado: %d\n", x);

    printf("\n");
    printf("x = 2 %% 2 + 2 * 2 - 2 / 2\n");
    printf("Primeiro: 2 %% 2 = 0\nSegundo: 2 * 2 = 4\nTerceiro: 2 / 2 = 1\nQuarto: 0 + 4 = 4\nQuinta: 4 - 1 = 3\n");
    x = 2 % 2 + 2 * 2 - 2 / 2;
    printf("Resultado: %d\n", x);
    
    printf("\n");
    printf("x = (3 * 9 * (3 + (9 * 3 / (3))))\n");
    printf("Primeiro: 9 * 3 = 27\nSegunda: 27 / (3) = 9\nTerceiro: 3 + 9 = 12\nQuarto: 3 * 9 = 27\nQuinta: 27 * 12 = 324\n");
    x = (3 * 9 * (3 + (9*3/ (3))));
    printf("Resultado: %d", x);
    
}