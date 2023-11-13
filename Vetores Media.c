#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//Variavel
float nota [3];
int i;
float soma = 0;
float media;

for (i = 0; i < 3; i++)
{
    printf ("Nota %d: \n", i+ 1);
    scanf ("%f", &nota[i]);

    soma += nota[i];
}

media = soma/3;

for (i = 0; i < 3; i++)
{
    printf ("Elemento [%d]: %f \n", i + 1, nota[i]);
}

printf ("Media: %f \n", media);
printf ("Soma: %f", soma);

return 0;
}