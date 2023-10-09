#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main () {

int i;

for (i = 1; i <= 10; i++)
{
    printf ("%d x 3 = %d \n", i, i*3);
    
}

getchar ();
return 0;
}