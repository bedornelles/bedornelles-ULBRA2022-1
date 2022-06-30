//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
 float dep, taxa, rend, total;
 printf("Digite o valor do deposito:\n");
 scanf ("%f*%c", &dep);

 printf("Digite o valor da taxa:\n");
 scanf ("%f*%c", &taxa);

 rend = (dep * taxa)/100 ;
  printf ("O valor do rendimento eh %.2f\n", rend);









}
