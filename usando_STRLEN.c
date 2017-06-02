#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

    int strlen(char *s)
    {
        int i=0;
        while (s[i]!='\o')
            i++;
        return i;
    }

int main()
{
    setlocale(LC_ALL, "Portuguese" );

    char nome[50],sobrenome[50];

    int op;



    do {

    printf("Dígite seu nome:");gets(nome);

    printf("Dígite seu sobrenome:");gets(sobrenome);

    if (strlen(nome)!=0)
    printf("%s , %s\n\n",sobrenome,nome);




    }while(strlen(nome)!=0);// Fim Do-wulhw


    return 0;
}
