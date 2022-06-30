//Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
//o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
//atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
//estar em metros.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  float alturaDegrau, alturaObjetivo, quantidadeDegraus;
  printf("Digite a altura em metros do degrau da escada: ");
  scanf("%f%*c", &alturaDegrau);
  printf("Digite a altura que voce deseja alcancar: ");
  scanf("%f%*c", &alturaObjetivo);

  quantidadeDegraus = alturaObjetivo / alturaDegrau;
  printf("Você precisara subir %.0f degraus para alcancar %.0f metros de altura\n", quantidadeDegraus, alturaObjetivo);
  return 0;

}
