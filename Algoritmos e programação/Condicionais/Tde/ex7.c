#include <stdio.h>
#include <math.h>
int main(){
int i;
float a, b, c;

    printf("Digite 1, 2 ou 3 para I: ");
    scanf("%d%*c", &i);

    printf("Digite um valor para A: ");
    scanf("%f%*c", &a);

    printf("Digite um valor para B: ");
    scanf("%f%*c", &b);

    printf("Digite um valor para C:");
    scanf("%f%*c", &c);

    if(i == 1){

    if((a < b) && (a < c))

    if(b < c)
    printf("Os valores em ordem crescente sao: - %f - %f - %f", a, b, c);

    else
    printf("Os valores em ordem crescente sao: - %f - %f - %f", c, b, a);
    }
    if(i==2){

    if((a > b) && (a > c))

    if(b > c)
    printf("Os valores em ordem decrescente sao: - %f - %f - %f", a, b, c);

    else
    printf("Os valores em ordem decrescente sao: - %f - %f - %f", a, c, b);

    if((b > a) && (b > c))

    if(a > c)
    printf("Os valores em ordem decrescente sao: - %f - %f - %f", b, a, c);

    else
    printf("Os valores em ordem decrescente sao: - %f - %f - %f", c, b, a);
    }

    if( i ==3) {

    if(( a > b) && (a > c))
    printf("A ordem desejada e: - %f - %f - %f", b , a, c);

    if((b > a) && (b > c))
    printf("A ordem desejada e: - %f - %f - %f",a, b, c);

    if((c > a) && (c > b))
    printf("A ordem desejada e: - %f - %f - %f", a, c, b);

    }

    }
