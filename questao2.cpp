#include<stdio.h>
int main (){

float peso, altura, imc;
printf("Esse programa calcula seu indice de massa corporal e sua categoria \n");
printf("Digite seu peso:");
scanf("%f", &peso);

printf("Digite sua altura:");
scanf("%f", &altura);

imc = peso/(altura*altura);
printf("Seu imc e %f, imc);

}
