#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//Variaveis
int vetor [3];
int i;

//Operacao
for ( i = 0; i < 3; i++)
{
    printf ("Nota %d:", i+1);
    scanf ("%d", &vetor[i]);
}

for (i = 0; i < 3; i++)
{
    printf ("Elemento [%d]: %d \n", i + 1, vetor[i]);
}



return 0;
}