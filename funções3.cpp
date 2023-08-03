#include<stdio.h>
#include<math.h>
int num(int x);
int main()
{

    int x, s;

    printf("Digite um numero: ");
    scanf("%i",&x);
    s = num(x);
    printf("\nO somatorio de %i eh: %i", x, s);
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



