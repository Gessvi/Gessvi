#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "portuguese");
	
	int i;
	int numero[6];
	int par;
	int impar;
	
for (i = 0; i < 5; i++)
	{
		printf ("Insira o numero:", i + 1);
		scanf ("%d", &numero[i]);
		
		if (numero[i] % 2 == 0)
		{
			par ++;
		}
		else 
		{
		impar ++;
		}
	}

	printf ("\n Exibindo os dados informados... \n");
	
	for (i = 0; i < 6; i++)
	{
		printf ("Resultado: %d \n", i + 1, numero[i]);
	}
	
	printf ("Numeros par: %d \n", par);
	printf ("numeros impar: %d \n", impar);
	
	
return 0;
}
