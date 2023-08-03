#include<stdio.h>
#define TAM 100

int main(){

int v[TAM], n,i;
printf("Digite quantos elementos vai utilizar: ");
scanf("%i", &n);

for(i=0; i<n; i++){
    printf("\nDigite um elemento: ");
    scanf("%i", &v[i]);
}
 for(i=0; i<n; i++){
 if(i%2==0){
    printf("\nO vetor que ocupa as posicoes pares sao: %i", v[i]);
 }
 }

}
