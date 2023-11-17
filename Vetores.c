#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

int i;
int par[6];

for ( i = 0; i < 6; i++)
{
    printf ("Insira %d  numero:", i + 1);
    scanf ("%d", &par[i]);

while ( par[i] % 2 == 1 || par[i] <= 0)
{
    printf("Apenas Numeros Positivos e Pares: \n");
    scanf ("%d", &par[i]);
}

for (i = 5; i >= 0; i--)
{
    printf ("%d \n", par[i]);
}


}

return 0;
}