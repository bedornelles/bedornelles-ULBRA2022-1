//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a) a idade dessa pessoa;
//b) quantos anos ela terá em 2050.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


  int anoNascimento, anoAtual, idade, idadeFuturo;
  printf("Digite o ano de nascimento: ");
  scanf("%d%*c", &anoNascimento);
  printf("Digite o ano atual: ");
  scanf("%d%*c", &anoAtual);

  idade = anoAtual - anoNascimento;
  idadeFuturo = 2050 - anoNascimento;
  printf("Sua idade eh: %d\n.", idade);
  printf("Você tera %d anos em 2050.\n", idadeFuturo);
  return 0;
}
