#include<stdio.h>
#define TAM 100

//8 – Crie um programa que recebe um vetor de N elementos e mostra quantos dos seus elementos
//são exatamente iguais a posição que o mesmo se encontra

int main(){

 int v[TAM],cont=0, n,i;

    printf("Quantos elementos?");
    scanf("%i", &n);

    for(int i=0; i<n; i++)
{
    printf("\nDigite o elemento do vetor:");
    scanf("%i",&v[i]);

}

for (i=0;i<n; i++){
if (v[i]==i){
    cont++;

}

}

   if(cont>0){
    printf ("\n%i elementos sao exatamente iguais a posicao que o mesmo se encontra", cont);
  }
   else{
    printf("\n nao possui elementos iguais ao indice");
   }







}
