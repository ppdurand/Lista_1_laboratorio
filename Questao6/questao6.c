// Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
// através da seguinte fórmula:
// para homens: 72.7 * altura - 58
// para mulheres: 62.1 * altura - 44.7

#include <stdio.h>

int main() {
  float altura, peso_ideal;
  char sexo[0];

  printf("Informe seu sexo: [M/F] ");
  scanf("%c", &sexo);
  printf("Informe sua altura em metros: ");
  scanf("%f", &altura);

  if(sexo[0] = 'M'){
    peso_ideal = 72.7 * altura - 58;
    printf("Seu peso ideal seria de %0.2f Kg", peso_ideal);
  }
  else if(sexo[0] = 'F'){
    peso_ideal = 62.1 * altura - 44.7;
    printf("Seu peso ideal seria %0.2f Kg", peso_ideal);
  } 
  else{
    printf("ERROR\n");
  }
  return 0;
}
