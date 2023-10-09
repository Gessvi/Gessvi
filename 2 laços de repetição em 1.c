#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

int i;
int j;

// para i de 1 ate 10 passo 1 faca
for ( j = 3; i <= 7; j+=2){
    for ( i = 1; i <= 10; i++){
    printf ("%d x %d = %d \n", j, i, i*j);
}
 printf ("\n");
}


return 0;
}