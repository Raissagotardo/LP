#include<stdio.h>
#include<math.h>
int maior(int x, int y, int z);
int main()
{

    int x,y,z,ms;

    printf("Digite um numero: ");
    scanf("%i",&x);

    printf("Digite um numero: ");
    scanf("%i",&y);

    printf("Digite um numero: ");
    scanf("%i",&z);

    ms= maior(x,y,z);
    printf("O maior numero eh: %i",ms);

}
int maior(int x, int y, int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if (y>z)
    {
      return y;
    }
    else
    {
      return z;
    }
}

