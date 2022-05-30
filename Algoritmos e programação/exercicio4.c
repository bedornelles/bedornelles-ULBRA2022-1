#include <stdio.h>
int main(void) {
float sal, aumento, novosal;
printf("digite o salario: \n");
scanf ("%f*c", &sal);
aumento = (sal * 25/100);
novosal = (sal + aumento);

printf ("O novo salario sera : %f", novosal);

return 0;
}
