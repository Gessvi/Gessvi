#include <stdio.h>
#include <stdlib.h>

int main () {

char nome; 
int idade ;
float notaum, notaDois, notaTres;
float media;

// Dados do aluno
printf ("Digite seu nome: ");
scanf ("%c", &nome);

printf ("Digite o ano de nascimento: ");
scanf ("%i", &idade);

// Nota do aluno
printf ("Digite sua nota: ");
scanf ("%f", &notaum);

printf ("Digite sua nota: ");
scanf ("%f", &notaDois);

printf ("Digite sua nota: ");
scanf ("%f", &notaTres);

//Calculando media
media = (notaum + notaDois + notaTres)/3;

//Exibindo media

if (media <= 7)
{
    printf ("Reprovado!");
}
else
{
    printf ("Aprovado!");
}


//Exibindo dados finais

printf ("media: %2.f \n", media);
printf ("nome: %c \n", nome);
printf ("idade: %i \n", idade);
printf ("notaUm: %i \n", notaum);
printf ("notaDois: %i \n", notaDois);
printf ("notaTres: %i \n", notaTres);

return 0;
}
