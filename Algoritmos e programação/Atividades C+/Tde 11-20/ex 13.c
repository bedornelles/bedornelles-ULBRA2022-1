//Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


  float pes, polegada, jarda, milha;
  printf("Digite uma medida em pes: ");
  scanf("%f%*c", &pes);

  polegada = pes * 12;
  jarda = pes / 3;
  milha = jarda / 1.760;

  printf("Polegadas %.1f\n", polegada);
  printf("Jardas %.1f\n", jarda);
  printf("Milhas %.1f\n", milha);
  return 0;

}
