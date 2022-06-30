//Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
    float sal, salreceber, imp;

    printf ("Digite o valor do salario:\n");


    scanf ("%f*%c", &sal);

    imp= (sal * 10/100);
    salreceber = (sal + 50 - imp);

    printf ("O salario final eh de %.2f\n", salreceber);
















}
