#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    
int n;

printf ("Digite o numero: ");
scanf ("%i", &n);

if (n == 10) {
   printf ("este numero e igual a 10");
}else if (n > 10) {
    printf ("e menor que 10");

}else if (n > 5){
    printf ("e maior que 5");
} else if (n > 3) {
    printf ("e maior que 3");
} else {
    printf ("E menor que 3");
}

return 0;
}
