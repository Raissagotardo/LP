#include<stdio.h>
#define TAM 100

//7 � Crie um programa que recebe um vetor de N elementos e um n�mero qualquer e mostra se
//esse n�mero pertence ou n�o ao vetor digitado

int main()
{
    int v[TAM], n, num, i;

    printf("Quantos elementos?");
    scanf("%i", &n);
    printf("\nDigite um numero: ");
    scanf("%i", &num);
    for(int i=0; i<n; i++)
    {
        printf("Digite um elemento do vetor : ");
        scanf("%i", &v[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]== num)
        {

            printf(" \nO numero: %i pertence ao vetor",num);
        }
        else
        {
            printf("\nO numero %i nao pertence ao vetor", num);
        }

    }


}
