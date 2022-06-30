#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main () {
float n1,n2,n3,media,exame;

    printf ("digite a primeira nota\n");
    scanf ("%f*c", &n1);
    printf ("digite a segunda nota\n");
    scanf ("%f%*c", &n2);
    printf ("digite a terceira nota\n");
    scanf ("%f%*c", &n3);

    media=(n1+n2+n3)/3;

    if(media>=0 && media<3){
    printf("Reprovado");
    }

    else if(media>=3 && media<7){
    printf("Exame\n");
    exame = (12 - media);
    printf("A nota que voce precisa eh: %.1f",exame);
    }

    else if(media>=7 && media<=10){
    printf("Aprovado");
    }



}
