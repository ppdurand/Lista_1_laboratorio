/*A linguagem C pode representar letras mai ́usculas, letras min ́usculas e uma grande variedade de
s ́ımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.

O conjunto de caracteres que um computador utiliza e as representa ̧c ̃oes dos n ́umeros inteiros corres-
pondentes `aqueles caracteres  ́e chamado conjunto de caracteres do computador. Vocˆe pode imprimir

o n ́umero inteiro equivalente `a letra mai ́uscula A, por exemplo, executando a instru ̧c ̃ao

printf(”%d\n”, ’A’);

Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.*/

#include <stdio.h>

int main(){
    puts("Inteiros de cada caractere;");
    printf("A: %d\n", 'A');
    printf("B: %d\n", 'B');
    printf("C: %d\n", 'C');
    printf("a: %d\n", 'a');
    printf("b: %d\n", 'b');
    printf("c: %d\n", 'c');
    printf("0: %d\n", '0');
    printf("1: %d\n", '1');
    printf("2: %d\n", '2');
    printf("$: %d\n", '$');
    printf("*: %d\n", '*');
    printf("+: %d\n", '+');
    printf("/: %d\n", '/');
    printf(" : %d\n", ' ');

    return 0;
}