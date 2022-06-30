//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {

    float sal, persent, novosal, aument;

    printf("Digite o valor do salario:\n");
    scanf ("%f*%c", &sal);

    printf ("Digite a porcentagem de aumento:\n");
    scanf ("%f*%c", &persent);

    aument = (sal*persent/100);

    printf("Voce teve um aumento de: %.2f\n", aument);

    novosal= (aument+sal);

    printf("Seu salario total eh : %.2f :\n", novosal);

















}
