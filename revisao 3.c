#include<stdio.h>
#define TAM 100

int main()
{

    int v[TAM],v1[TAM], i, n, v3[TAM];

    printf("Digite quantos elementos vai utilizar: ");
    scanf("%i", &n);

    for(i=0; i<n; i++)
    {
        printf("\nDigite um elemento do primeiro vetor: ");
        scanf("%i", &v[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("\nDigite um elemento do segundo vetor: ");
        scanf("%i", &v1[i]);

    }
    printf("\nOs  elemetos do primeiro vetor sao:  ");
    for(i=0; i<n; i++)
    {
        printf("%i ",v[i]);
    }
    printf("\nOs  elemetos do segundo vetor sao:  ");
    for(i=0; i<n; i++)
    {
        printf("%i ",v1[i]);
    }
    for(i=0; i<n; i++)
    {
        v3[i]= v[i]+ v1[i];
    }
    printf("\nA soma dos vetores eh: ");
     for(i=0; i<n; i++){
        printf("%i ", v3[i]);
     }












}
