#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <assert.h>

int main (){
	setlocale (LC_ALL, "portuguese");

int i;
int numero[5];
int positivo = 0;
int negativo = 0;
int soma;

for ( i = 0; i < 5; i++)
{
  printf ("Insira um numero:", i + 1);
  scanf ("%d", &numero[i]);
}

for ( i = 0; i < 5; i++)
{
    soma += numero[i];

    if (numero[i] > 0)
    {
        positivo++;
    }
    else if (numero [i] < 0)
    {
        negativo++;
    }

}

printf ("\n Exibindo Dados Informados...\n");


printf ("Numeros Positivos: %d \n", positivo);
printf ("Numeros Negativos: %d \n", negativo);
printf ("Soma: %d \n", soma);

return 0;
}