//Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
//mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
//cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float pesoRacao, racaoDiaria, gastoRacao, quantidadeRestante;
  printf("Digite o peso do saco de racao: Kg");
  scanf("%f%*c", &pesoRacao);
  printf("Digite a quantidade de racao diaria em gramas: ");
  scanf("%f%*c", &racaoDiaria);

  pesoRacao *= 1000;
  gastoRacao = racaoDiaria * 5;
  quantidadeRestante = (pesoRacao - gastoRacao) / 1000;
  printf("A quantidade de racao restante apos 5 dias eh de: %.1fKg\n", quantidadeRestante);
  return 0;
}
