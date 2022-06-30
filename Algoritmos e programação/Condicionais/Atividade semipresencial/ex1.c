//Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritimética das notas
//e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <stdio.h>
#include <math.h>

int main(){

    float nota1, nota2, nota3, nota4, media;

    printf("Digite sua primeira nota:\n");
    scanf("%f%*c", &nota1);

    printf("Digite sua segunda nota:\n");
    scanf("%f%*c", &nota2);

    printf("Digite sua terceira nota:\n");
    scanf("%f%*c", &nota3);

    printf("Digite a sua quarta nota:\n");
    scanf("%f%*c", &nota4);

    media=(nota1+nota2+nota3+nota4)/4;

    printf("Sua media e: %.2f\n\n", media);

    if (media>=7 && media<=10)
    {printf("Aprovado\n");

    }
    else{
        printf("Reprovado\n");
    }

    return 0;

}

