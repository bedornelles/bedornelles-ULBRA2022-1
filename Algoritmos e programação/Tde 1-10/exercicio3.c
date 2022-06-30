////Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

    int main (void) {
    int n1, n2, n3, p1, p2, p3, s1, s2, media;
    printf ("digite a primeira nota\n");
    scanf ("%d*c", &n1);
    printf ("digite a segunda nota\n");
    scanf ("%d%*c", &n2);
    printf ("digite a terceira nota\n");
    scanf ("%d%*c", &n3);
    printf ("digite o peso1 \n");
    scanf ("%d%*c", &p1);
    printf ("digite o peso2 \n");
    scanf ("%d%*c", &p2);
    printf ("digite o peso3 \n");
    scanf ("%d%*c", &p3);
    s1=(n1*p1)+(n2*p2)+(n3*p3);
    s2=(p1+p2+p3);
    media= (s1/s2);
    printf ("A media eh: %d", media);
    return 0;
}
