#include <stdio.h>
#include <stdlib.h>

int main () {
int idade;
int T; 
int cod; 


//Adquirindo dados
printf ("Digite seu codigo:");
scanf ("%i", &cod);

system ("cls\\clear");

printf ("Digite sua idade: ");
scanf ("%i", &idade);

system ("cls\\clear");

printf ("Digite seu tempo de trabalho: ");
scanf ("%i", &T);

system ("cls\\clear");

//Dados do usuario
printf ("idade: %i \n", idade);
printf ("Tempo de trabalho: %i \n", T);
printf ("Codigo do usuario: %i \n", cod);

//operacao 
if ((idade >= 65) || (T >= 30))
{
    printf ("---------Requerer aposentadoria!!----------");
}
else
{
    printf ("-------Nao requerer aposentadoria!!---------- ");
}



return 0;
}