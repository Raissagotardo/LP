#include<stdio.h>
#define TAM 100

//6 – Crie um programa que recebe um vetor de N elementos e mostra quantos dos seus elementos
//são maiores que a média.


int main()
{
    int v1[TAM], n,i, b=0 ;
    float media, v2;

    printf("Quantos elementos?");
    scanf("%i", &n);

    for(int i=0; i<n; i++)
    {
        printf("Digite um elemento do vetor : ");
        scanf("%i", &v1[i]);
    }

    for(int i=0; i<n; i++)
    {
        v2= v1[i]+ v2;
    }

    media= v2/n;
    printf("a media eh:%f  \n", media );


    printf("\no numero de elementos maiores que a media sao: \n");
    for(int i=0; i<n; i++)
    {
        if(v1[i]>media)
        {
            b++;
        }
    }
    printf("%i", b);


}

