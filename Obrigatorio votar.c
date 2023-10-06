#include <stdio.h>
#include <stdlib.h>

int main (){
int idade;

//Buscando dados

printf ("informe sua idade:");
scanf ("%i", &idade);

if (idade >= 18 && idade <= 65)
{
    printf ("---------E obrigatorio a votar!!----------");
}
 else
 {
    printf ("------------Nao e obrigatorio votar----------");
 }
 

return 0;
}