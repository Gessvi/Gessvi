#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <string.h>

int main () {

float pesoI;
float altura;
char sexo;

//adquirindo dados
printf ("Infore seu sexo: ");
scanf ("%c", &sexo);
printf ("Digite seu altura:");
scanf ("%f", &altura);

sexo = toupper (sexo);

//operacao
switch (sexo)    
{
case 'M' :
pesoI = (72.7 * altura) - 58;
    break;

case 'F':
pesoI = (62.1 * altura) - 44.7;
    break;

default:
    break;
printf ("Informaçoes invalidas! \n");
}

printf ("peso ideal: %2.f \n", pesoI);
printf ("Seu sexo: %c \n", sexo);
printf ("Sua altura: %2.f \n", altura);





return 0;
}