#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2, ponto_medio;

    printf("Digite o valor de X da primeira coordenada: ");
    scanf("%lf", &x1);
    printf("Digite o valor de Y da segunda coordenada: ");
    scanf("%lf", &y1);
    printf("Digite o valor de X da segunda coordenada: ");
    scanf("%lf", &x2);
    printf("Digite o valor de Y da segunda coordenada: ");
    scanf("%lf", &x2);

    ponto_medio = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    printf("PONTO MEDIO: %0.2lf", ponto_medio);

    return 0;
}
