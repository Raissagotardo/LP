#include<stdio.h>

int main(){

int age;

printf("Esse programa informa se voce pode ser um doardor ou nao\n");
printf("Digite sua idade:");
scanf("%i",&age);

if(age>=18 && age<=64){
    printf("Voce pode ser um doador");

}
else {
    printf("Sinto muito, voce nao pode ser um doador");
}

}
