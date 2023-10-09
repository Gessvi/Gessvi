#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

int i;
int numero;
float soma = 0;

for ( i = 1; i <= 5; i++)
{
    printf  ("Solicite o %d numeros: \n", i);
    scanf ("%d", &numero);

//soma = soma + u
soma += numero;
}

printf ("soma: %f \n", soma);











return 0;
}