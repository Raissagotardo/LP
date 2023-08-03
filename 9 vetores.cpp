#include<stdio.h>
#define TAM 100
#include<math.h>
//9 – Crie um programa que recebe um vetor e calcula a sua norma (tamanho)
int main()
{
 int v[TAM], n,i, soma=0;
 float r;

    printf("Quantos elementos?");
    scanf("%i", &n);

    for(i=0; i<n; i++)
{
    printf("\nDigite o elemento do vetor:");
    scanf("%i",&v[i]);
}
 for(i=0; i<n; i++){
    v[i]= pow (v[i], 2);
 }
 for(i=0; i<n; i++){
    soma=soma+v[i];
 }

 r=sqrt(soma);
 printf("\n A norma do vetor eh: %f",r);

 }





