#include<stdio.h>
int main()
{

float km, preco, consumo, tg;
printf("Esse programa calcula oos litros de galosina e o valor do dinheiro gasto\n");
printf("Digite a quantidade de km percorridos:");
scanf("%f", &km);

printf("Digite o preço da galosina:");
scanf("%f", &preco);

consumo = km/12;
tg = km*consumo;

printf("consumo de litros e dinheiro gasto %f %f" , consumo,tg);

}
