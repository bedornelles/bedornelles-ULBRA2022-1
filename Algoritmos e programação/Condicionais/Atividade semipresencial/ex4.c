//Faça um programa que receba três números e mostre o maior
#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, num3;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &num2);

    printf("Digite o terceiro numero:\n");
    scanf("%f%*c", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("O maior numero e: %.1f", num1);
    }
    if (num2>num1 && num2>num3)
    {
        printf("O maior numero e: %.1f", num2);
    }
    if (num3>num2 && num3>num1)
    {
        printf("O maior numero e: %.1f", num3);
    }

    return 0;





}
