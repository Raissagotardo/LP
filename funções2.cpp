#include<stdio.h>
#include<math.h>
void maior(int x, int y, int z);
int main()
{

    int x,y,z;

    printf("Digite um numero: ");
    scanf("%i",&x);

    printf("Digite um numero: ");
    scanf("%i",&y);

    printf("Digite um numero: ");
    scanf("%i",&z);

    maior(x,y,z);


}
void maior(int x, int y, int z)
{
    int m;
    if(x>y && x>z)
    {
        m=x;
    }
    else if ( y>z)
    {
        m=y;
    }
    else
    {
        m=z;
    }
    printf("O maior numero eh: %i",m);
}
