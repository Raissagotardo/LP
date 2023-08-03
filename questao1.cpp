#include<stdio.h>
int main(){

float n1, n2, p1, p2, peso, media;
printf("Esse programa calcula sua media ponderada \n");

printf("Digite sua primeira nota:");
scanf("%f", &n1);

printf("Digite sua segunda nota:");
scanf("%f", &n2);

printf("Digite o peso da primeira nota:");
scanf("%f", &p1);

printf("Digite o peso da segunda nota:");
scanf("%f", &p2);

peso = p1+p2;
media = (n1*p1+n2*p2)/peso;
printf("Sua media ponderada foi = %f", media);

}
