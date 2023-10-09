#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

int i;

printf ("==============TABUADA DO 5=================;");

for ( i = 0; i <= 10; i++)
{
    printf ("%d x 5 = %d \n", i, i*5);
    
}

printf ("============TABUADA DO 7===========");

for ( i = 0; i <= 10; i++)
{
    printf ("%d x 7 = %d \n", i, i*7);
}




return 0;
}