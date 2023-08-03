#include<stdio.h>

int main()
{
    float n;
    int i,c;

    printf("Esse programa diz se sua nota e valida ou invalida\n");

    printf("Digite quantas notas voce deseja calcular:\n");
    scanf("%i",&c);
    i=0;

    while(i<c)
    {
        printf("Digite sua nota:\n");
        scanf("%f", &n);

        if(n>=0.0 && n<=100.0)
            printf("Sua nota e valida\n");

        else
        {
            printf("Sua nota e invalida\n");
        }
        i=i+1;

    }

}
