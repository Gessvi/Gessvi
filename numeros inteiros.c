#include <stdio.h>
#include <stdlib.h>

int main () {

int nUm, nDois;
float media; 
float soma;
float produto; 
int maior, menor;

//Buscando dados
printf ("Digite o primeiro numero: ");
scanf ("%i", &nUm);

printf ("Digite o segundo numero: ");
scanf ("%i", &nDois);

//Calculando media
soma = nUm + nDois;
media = soma/2;
produto = nUm * nDois;

//Valores

if (nUm > nDois)
{
    maior = nUm;
    menor = nDois;
}
else
{
    maior = nDois;
    menor = nUm;
}


// Exibir dados
printf ("media: %f \n", media);
printf ("soma: %f \n", soma);
printf ("produto: %2.f \n", produto);
printf ("maior valor: %i \n", maior);
printf ("menor valor: %i \n", menor);


return 0;
}