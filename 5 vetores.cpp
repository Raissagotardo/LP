#include<stdio.h>
#define TAM 100

//5 – Crie um programa que recebe um vetor de N elementos e calcula a média de todos os
//elementos.

int main()
{
    int v1[TAM], n,i ;
    float media, v2=0;

    printf("Quantos elementos?");
    scanf("%i", &n);

    for(int i=0; i<n; i++)
    {
        printf("Digite um elemento do vetor : ");
        scanf("%i", &v1[i]);
    }

    for(int i=0; i<n; i++){
        v2= v1[i]+ v2;
        }
      printf("Vetor media =  ");
     for(int i=0; i<n; i++)
    {
        media= v2/n;
        printf("%f \n", media);

}
}
