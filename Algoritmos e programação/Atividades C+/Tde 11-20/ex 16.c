//Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo, calcule e
//mostre o sal�rio a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do sal�rio m�nimo.
//b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
//c) o imposto equivale a 3% do sal�rio bruto.
//d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {


  float salarioMinimo, horasTrabalhadas, valorHora, salarioBruto, imposto, salarioAreceber;
  printf("Digite o salario minimo: $");
  scanf("%f%*c", &salarioMinimo);
  printf("Digite o total de horas trabalhadas: ");
  scanf("%f%*c", &horasTrabalhadas);

  valorHora = salarioMinimo / 2;
  salarioBruto = horasTrabalhadas * valorHora;
  imposto = salarioBruto * 3 / 100;
  salarioAreceber = salarioBruto - imposto;
  printf("Salario a receber %.2f\n", salarioAreceber);
  return 0;
}
