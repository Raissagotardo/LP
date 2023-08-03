#include<stdio.h>
#define TAM 100

int main(){

//Faça que recebe um vetor e imprime o vetor de tras pra frente.

int n, v[TAM];
 printf("Digite quantos elementos vai utilizar? ");
 scanf("%i", &n);

 for(int i=0; i<n; i++){
    printf("\nDigite um elemento: ");
    scanf("%i", &v[i]);
 }
for(int i=n-1; i>=0; i--) {
  printf("\nOs vetores sao:  %i", v[i]);

}


}
