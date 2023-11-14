#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");
	
	int i;
	int numero[5];
	int maior;
	int menor;
	
	
	for (i = 0; i < 5; i++)
	{
		printf ("Insira o numero:", i + 1);
		scanf ("%d", numero[i]);
		
		maior = maior > numero[i] ? maior : numero[i];
		menor = menor < numero[i] ?  menor : numero[i];
		
	}
	
	printf ("\n Exibindo dados \n");
	 
	for (i = 0; i < 5; i++)
	{
		print ("Resultado: %d \n", i + 1, numero[i]);
	}
	
	printf ("maior: %d \n", maior);
	printf ("menor: %d \n", menor);
	

	
return 0;
}
