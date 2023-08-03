#include<stdio.h>
#include<math.h>
int main(){

float a, b, c, delta, x1, x2;
printf("Esse programa calcula o resultado de uma equacao de segundo grau\n");
printf("Digite o valor de a:");
scanf("%f",&a);

printf("Digite o valor de b:");
scanf("%f", &b);

printf("Digite o valor de c:");
scanf("%f", &c);

delta = b*b-(4*a*c);
x1 = (-b+ sqrt (delta))/(2*a);
x2 = (-b- sqrt (delta))/(2*a);

printf("o valor delta: %f valor de x1: %f  valor de x2:%f" , delta , x1, x2);


}
