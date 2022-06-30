//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main (){
float n1, n2, n3, n4, soma;

    printf("Digite o primeiro numero:");
    scanf("%f*c", &n1);
    printf("Digite o segundo numero:");
    scanf("%f*c", &n2);
    printf("Digite o terceiro numero:");
    scanf("%f*c", &n3);
    printf("Digite o quarto numero:");
    scanf("%f*c", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("A soma eh: %1.f", soma);

    return 0;

}
