#include<stdio.h>

int main(){

int v[100], n, i;

printf ("Digite quantos elementos vai utilizar: ");
scanf ("%i", &n);

for(i=0; i<n; i++){
    printf ("Elementos: ");
    scanf ("%i", &v[i]);

}
printf ("Vetores: ");
for(i=0; i<n; i++){
        printf ("%i", v[i]);
}
return 0;
}
