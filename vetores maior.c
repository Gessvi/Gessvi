#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
int i;
int numero [5];
int maior = 0;
int menor = 9999;

for ( i = 0; i < 5; i++)
{
    printf ("Insria um numero:", i + 1);
    scanf ("%d", &numero[i]);

    maior = numero[i] > maior ? numero[i] : maior;
    menor = menor < numero[i] ? menor : numero[i];
}

printf (" \n Exibindo dados \n");

for (i = 0; i < 5; i++)
{
    printf ("Elementos [%d] %d \n", i + 1, numero[i]);
}

printf ("Maior Numero: %d \n", maior);
printf ("Menor Numero: %d \n", menor);
return 0;
}
