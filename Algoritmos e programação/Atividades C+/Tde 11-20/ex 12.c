//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

  int numero1, numero2;

  printf("Digite um numero: ");
  scanf("%d%*c", &numero1);
  printf("Digite um numero: ");
  scanf("%d%*c", &numero2);

  int resultado = pow(numero1, numero2);
  printf("Os numero %d elevado ao numero %d é igual a: %d\n", numero1, numero2, resultado);
  return 0;
}
