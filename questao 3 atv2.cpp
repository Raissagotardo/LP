#include<stdio.h>
#include<math.h>

 int main(){
 float cons, prec, prec2, valor;

 printf("Esse programa recebe o consumo da agua em metros e calcula o preco da conta\n");

 printf("Digite o consumo de agua em metros cubicos:");
 scanf("%f", &cons );

 prec= cons*8.50;
 prec2= cons*11.00;

 if(cons>=20)
 {printf("O valor da conta e:%f", prec2);
 }

 else if (cons<20)
 {
     printf("O valor da conta e: %f" , prec);
 }
 }
