#include <stdio.h>
#include <math.h>

int main(){
int num;

printf("Digite um numero: ");
scanf("%d%*c, &num");

if(num % 2 == 1){
printf("O numero e par");
}
else{
printf("O numero e impar");
}

return 0;
}


/////////////////////////////////////
int main(){
int num, r;

printf("Digite um numero: ");
scanf("%d%*c, &num");

r = (num/2);

if (r=0){
printf("O numero e par");
}
else{
printf("O numero e impar");
}

return 0;
}

