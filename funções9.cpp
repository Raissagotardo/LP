#include<stdio.h>
#include<math.h>

int maior(int a, int b, int c);
int main()
{

    int a,b,c,d,e,f,soma=0;

    printf("Digite um numero: ");
    scanf("%i",&a);

    printf("Digite um numero: ");
    scanf("%i",&b);

    printf("Digite um numero: ");
    scanf("%i",&c);

    printf("Digite um numero: ");
    scanf("%i",&d);

    printf("Digite um numero: ");
    scanf("%i",&e);

    printf("Digite um numero: ");
    scanf("%i",&f);

    soma= maior(a,b,c)+ maior(d,e,f);

    printf("\nA soma do maior valor entre A,B,C e o maior valor entre D,E e F eh: %i", soma);

}

int maior(int a, int b, int c)
{

    int m;
    if(a>b && a>c)
    {
        m=a;
    }
    else if (b>a && b>c)
    {
        m=b;
    }
    else
    {
        m=c;
    }
    return m;
}

