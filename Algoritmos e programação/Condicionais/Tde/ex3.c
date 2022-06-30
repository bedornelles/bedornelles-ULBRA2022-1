#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main (){
float n1, n2;

    printf ("Digite um numero:");
    scanf ("%f*c", &n1);

    printf ("Digite outro numero:");
    scanf ("%f*c", &n2);

    if(n1>n2){
    printf("O maior numero eh: %.1f",n1);
    }

    if(n1<n2){
    printf("O maior numero eh: %.1f",n2);
    }

    else if (n1==n2){
    printf("Os numeros sao iguais");
    }

    }
