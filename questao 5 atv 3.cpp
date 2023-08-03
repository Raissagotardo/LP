#include<stdio.h>
int main (){

float peso, altura, imc;
printf("Esse programa calcula seu indice de massa corporal e sua categoria \n");
printf("Digite seu peso:");
scanf("%f", &peso);

printf("Digite sua altura:");
scanf("%f", &altura);

imc = peso/(altura*altura);
printf("Seu imc e %f\n", imc);

if (imc <18.5){
    printf("Voce esta abaixo do peso");
}
 else if (imc>=18.5 && imc<=24.9){
    printf( "Voce esta com peso normal");
}
else if (imc>=25.0&& imc<=29.9){
    printf(" Voce esta em sobrepeso");
}
else if (imc>=30.0&& imc<=34.9 ){
    printf("Voce esta com obesidade grau I");
}
else if (imc>=35.0 && imc<=39.9){
    printf("voce esta com obesidade grau II");
}
else{
    printf("voce esta com obesidade morbida");
}
}
