//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.

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
