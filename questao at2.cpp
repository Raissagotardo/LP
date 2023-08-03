#include<stdio.h>
#include<math.h>
int main(){

int n1, n2, valor, impar,elev, elev2;

printf(" Esse programa recebe dois numeros positivos e realiza operacoes\n");

 printf("Digite dois numeros postivos:");
scanf("%i %i", &n1, &n2);

  valor=n1+n2;
  impar= sqrt (valor);
  elev= pow (n1,n2);
  elev2= pow (valor, 5);

if(n1%2==0 && n2%2==0){
   printf("Esse numero e par e a soma e igual a %i", valor);
}
 else if(n1%2!=0 && n2%2!=0){;
    printf("Esse numero e impar e a raiz quadrada da soma e: %i",impar);
 }
    else if(n1%2==0 && n2%2!=0){;
    printf("O valor do primeiro numero elevado ao segundo e: %i", elev);
 }
       else if (n1%2!=0 && n2%2==0){;
        printf(" A soma dos dois numeros elevado a cinco e: %i\n", elev2);
       }
       printf("FIM");
}




