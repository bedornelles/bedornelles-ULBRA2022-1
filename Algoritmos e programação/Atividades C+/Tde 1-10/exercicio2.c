//Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void) {
    int n1,n2,n3,media;
    printf ("digite o primeiro valor\n");
    scanf ("%d%*c", &n1);
    printf ("digite o segundo valor\n");
    scanf ("%d%*c", &n2);
    printf ("digite o terceiro valor\n");
    scanf ("%d%*c", &n3);
    printf ("A media de %.1d e %.1d e %.1d = %.1d" ,n1, n2, n3, (n1+n2+n3)/3 );

    return 0;
}
