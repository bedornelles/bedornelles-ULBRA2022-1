//O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do
//distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba o pre�o de f�-
//brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o pre�o final do ve�culo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {


  float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
  printf("Digite o preco de fabrica do veiculo: $");
  scanf("%f%*c", &precoFabrica);
  printf("Digite o percentual de lucro do distribuidor: ");
  scanf("%f%*c", &perceLucro);
  printf("Digite o percentual de imposto : ");
  scanf("%f%*c", &percImposto);

  lucroDistribuidor = precoFabrica * perceLucro / 100;
  imposto = precoFabrica * percImposto / 100;
  precoFinal = precoFabrica + lucroDistribuidor + imposto;
  printf("O lucro do distribuidor sobre um veiculo no valor de $%.2f sera de $%.2f \n",precoFabrica, lucroDistribuidor);
  printf("O valor do imposto sera de $%.2f \n", imposto);
  printf("O preco final do veiculo ficara no valor de $%.2f\n",precoFinal);
  return 0;
}
