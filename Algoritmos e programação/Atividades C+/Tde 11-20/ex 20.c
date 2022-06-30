//Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
//chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule e mostre a me-
//dida dessa escada.
//Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
//com medidas de ângulos em radianos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


  float anguloEscada, altura, radiano, escada;
  float pi = 3.14;
  printf("Digite a medida do angulo formado pela escada na parede: ");
  scanf("%f%*c", &anguloEscada);
  printf("Digite a altura alcancada pela escada: ");
  scanf("%f%*c", &altura);

  radiano = anguloEscada * 3.14 / 180;
  escada = altura / radiano;
  printf("A escada tem: %.1f metros de comprimento. \n", escada);
  return 0;
}
