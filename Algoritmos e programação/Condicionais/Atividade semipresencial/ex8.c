#include <stdio.h>
#include <math.h>

int main(){

    float sal, novo_sal;

    printf("Digite o valor do seu salario:\n");
    scanf("%f%*c", &sal);

    if (sal<300){

        novo_sal=sal+(sal*35/100);

        printf("Seu novo salario e %.f", novo_sal);

    }
    if (sal>=300)
    {
        novo_sal=sal+(sal*15/100);

        printf("Seu novo salario e de %.f", novo_sal);
    }

    return 0;

}
