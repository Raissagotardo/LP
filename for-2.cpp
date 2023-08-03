#include<stdio.h>
#include<math.h>

int main(){
    int i,n,f;
    float m;

    printf("Quantos alunos?");
    scanf("%i",&n);

    for(i=0; i<n; i++){
        printf("\nDigite a media: ");
    scanf("%f",&m);
    printf("\nDigite a quantidade de faltas do aluno: ");
    scanf("%i",&f);
    if(m>=6.0 && f<=15){

        printf("Aprovado!");
    }
    else{
        printf("Reprovado");
    }

    }

}
