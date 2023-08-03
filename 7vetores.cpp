#include<stdio.h>
#define TAM 100

//7 – Crie um programa que recebe um vetor de N elementos e um número qualquer e mostra se
//esse número pertence ou não ao vetor digitado

int main()
{
    int v[TAM], n, num, i, c=0;

    printf("Quantos elementos?");
    scanf("%i", &n);

    for(int i=0; i<n; i++)
    {
        printf("Digite um elemento do vetor : ");
        scanf("%i", &v[i]);
    }

     printf("\nDigite um numero: ");
    scanf("%i", &num);

    for(int i=0; i<n; i++)
    {
        if(v[i]== num)
        {
            c++;

        }
    }

            if (c>0)
            {
                printf(" \nO numero: %i pertence ao vetor",num);
            }
            else

            {
                printf("\nO numero %i nao pertence ao vetor", num);

            }
    }


