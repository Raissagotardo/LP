#include<stdio.h>
#include<math.h>

int main()
{

    float l, a;

    printf("Esse programa calcula a area de um quadrado\n");
    printf("O programa se encerra quando digitar um numero negativo ou maior que 50.\n");
    printf ("Digite a medida do lado:");
    scanf("%f",&l);

    while (l>0 && l<=50)
    {
        a= pow(l,2);

        printf("A area do quadrado eh:%f \n", a);
        printf("Digite a medida do lado: ");
        scanf("%f",&l);
    }
}
