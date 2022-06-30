//Faça um programa que receba dois números e mostre o menor

#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num2);

    if (num1>num2){
        printf("O numero menor e: %.f\n", num1);
    }
     else if (num2>num1){
        printf("O numero menor e: %.f\n", num2);
    }
    else{
        printf("Digite numeros diferentes\n");
    }

    return 0;


}
