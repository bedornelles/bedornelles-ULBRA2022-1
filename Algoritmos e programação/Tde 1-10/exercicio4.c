//Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.

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
