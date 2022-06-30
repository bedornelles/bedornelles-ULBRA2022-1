//Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main() {


  int numero;
  printf("Digite um numero: ");
  scanf("%d%*c", &numero);

  int aoQuadrado = pow(numero, 2);
  int aoCubo = pow(numero, 3);
  float raizQuadrada = sqrt(numero);
  float raizCubica = cbrt(numero);

  printf("O numero %d ao quadrado eh: %d\n", numero, aoQuadrado);
  printf("O numero %d ao cubo eh: %d\n", numero, aoCubo);
  printf("A raiz quadrada do numero %d eh: %.2f\n", numero, raizQuadrada);
  printf("A raiz cubica do numero %d eh: %.2f\n", numero, raizCubica);
  return 0;
}
