//Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
    float base, altura, area, total;

    printf ("Digite o valor da base:\n");
    scanf ("%f*%c", &base);

    printf ("Digite o valor da altura:\n");
    scanf ("%f*%c", &altura);

    area= (base * altura);
    total = (area/2);

    printf ("A area da figura eh: %.2f\n", total);












}
