//Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
//a) o n�mero digitado ao quadrado;
//b) o n�mero digitado ao cubo;
//c) a raiz quadrada do n�mero digitado;
//d) a raiz c�bica do n�mero digitado.

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
