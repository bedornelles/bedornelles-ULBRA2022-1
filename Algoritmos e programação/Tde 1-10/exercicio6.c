//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
    float sal, salreceber, grat, imp;

    printf("Digite o salario:\n");
    scanf ("%f*%c", &sal);

    grat= (sal * 5/100);
    imp= (grat * 7/100);

    salreceber= (sal + grat - imp);

    printf ("Seu salario final eh de %.2f\n", salreceber);











}
