#include <stdio.h>
#include <stdlib.h>

int main () {
int nUm, nDois, nTres;
int maior;
int menor;

//Buscando dados
printf ("Informe o primeiro numero: ");
scanf ("%i", &nUm);

printf ("Informe o segundo numero: ");
scanf ("%i", &nDois);

printf ("Informe o terceiro numero: ");
scanf ("%i", &nTres);

//operacao
maior = nUm > nDois ? nUm : nDois;
maior = maior > nTres ? maior : nTres;

menor = nUm < nDois ? nUm : nDois;
menor =  menor < nTres ? menor : nTres;

//informacao dos dados
printf ("Numero Um %i \n", nUm);
printf ("Numero Dois: %i \n", nDois);
printf ("Numero Tres: %i \n", nTres);
printf ("Maior valor: %i \n", maior);
printf ("Menor valor: %i \n", menor);





return 0 ;
}