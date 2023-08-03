#include<stdio.h>
#include<math.h>
void media(float n1, float n2, float n3);
int main()
{

    float n1,n2,n3,soma;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media(n1,n2,n3);
}
void media(float n1, float n2, float n3)
{
    float me;
    me= (n1+n2+n3)/3;
    printf("\nO valor da media eh: %f", me);
    if(me>=6.0)
    {
        printf("\nAprovado!!");
    }
    else
    {
        printf("\nReprovado");
    }
}
