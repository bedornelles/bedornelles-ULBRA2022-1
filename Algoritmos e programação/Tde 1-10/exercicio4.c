//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

    int main(void) {
    float sal, aumento, novosal;
    printf("digite o salario: \n");
    scanf ("%f*c", &sal);
    aumento = (sal * 25/100);
    novosal = (sal + aumento);

    printf ("O novo salario sera: %f", novosal);

    return 0;
    }
