#include<stdio.h>

int main (){
float caeham, baec, bovo, h, r, cod, quant;

printf("Esse programa le o codigo e calcula o o valor que voce ira pagar no lanche \n");
printf("Digite o codigo do seu produto:");
scanf("%f",&cod);
printf("Digite a quantidade:");
scanf("%f", &quant);

caeham= 1.20*quant;
baec= 1.30*quant;
bovo= 1.50*quant;
r= 1.0*quant;

if(cod ==100 || cod==103){
    printf ("Voce ira pagar %f",caeham);
}
 else if (cod ==101 || cod==104){
    printf ("Voce ira pagar %f", baec);
 }

else if(cod ==102)
{
    printf("Voce ira pagar %f", bovo);
}
else if(cod==105){
    printf("Voce ira pagar %f", r);
}


























}

