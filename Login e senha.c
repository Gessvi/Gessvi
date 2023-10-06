#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
char loginSalvo [250] = "miranda";
char senhaSalva [250] = "mi123";
char login [250];
char senha [250];

printf ("Digite seu usuario: ");
gets (login);

printf ("Digite sua senha: ");
gets (senha);

// Entrada de dados
if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0)
{
    printf("-------------SEJA BEM VINDA!!----------");
}
else
{
    printf ("-----------SENHA OU USUARIO INCORRETO!!--------");
}


return 0;
}
