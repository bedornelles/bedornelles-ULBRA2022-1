//Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
//cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
//CPMF de 0,38% e o saldo inicial da conta está zerado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

  float salario, cheque1, cheque2, cpmf1, cpmf2;

  printf("Valor do salario depositado: $");
  scanf("%f%*c", &salario);
  printf("Cheque descontado: $");
  scanf("%f%*c", &cheque1);
  printf("Cheque descontado: $");
  scanf("%f%*c", &cheque2);
  cpmf1 = cheque1 * 0.38 / 100;
  cpmf2 = cheque2 * 0.38 / 100;
  salario = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2) ;

  printf("O Saldo bancario atual eh de: $%.2f\n", salario);
  return 0;
}
