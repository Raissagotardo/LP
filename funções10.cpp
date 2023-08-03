#include<stdio.h>
#include<math.h>

int num(int x);
int mediaN(int n);
int main()
{

    int x, s;

    printf("Digite um numero: ");
    scanf("%i",&x);
    s = mediaN(x);
    printf("\nA media de %i eh: %i", x,s);
}

int mediaN(int n)
{
    int media;
    media=num(n)/n;
    return media;

}

int num(int x)
{
    int s=0,i;
    for (i=0; i<=x; i++)
    {
        s=s+i;

    }
    return s;

}
