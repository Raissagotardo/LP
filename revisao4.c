#include<stdio.h>
#define TAM 100

int main()
{

    int i, v[TAM], n, v1=0;
    printf("Digite; quantos elementos vai utilizar: ");
    scanf("%i", &n);

    for(i=0; i<n; i++)
    {
        printf("\nDigite um elemento: ");
        scanf("%i",&v[i]);
    }
    for (i=0; i<n; i++)
    {
        v1= v[i]+v1;

    }
    printf("\nA soma dos elementos do vetor eh: ");

    printf("%i ", v1);

}
