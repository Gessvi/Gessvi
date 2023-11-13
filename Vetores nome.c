#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int idade [5];
char s [200] [5];
int i;

for ( i = 0; i < 5; i++)
{ 
	printf ("Insira seu nome: \n ");
    gets(s[i]);
    
    printf ("Idade %iº:", i+1);
    scanf ("%i", &idade[i]);
	
	fflush (stdin);
}

printf (" \n Exibindo dados \n");

for (i = 0; i < 5; i++)
{
   printf ("Idade [%i]: %i \n", i + 1, idade[i]);
   
   printf ("Nome: %s \n \n",s[i]);
}




return 0;
}
