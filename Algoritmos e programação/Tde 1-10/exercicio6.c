//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tamb�m sobre o sal�rio base.

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
