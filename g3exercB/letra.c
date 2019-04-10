#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    char *t;
    int n;
    do
    {
        printf("Num <50:\n");
        scanf(" %d", &n);
    } while (n > 50);
    
    t = n_letras(n);

    fputs(t, stdout);
    printf("\n");

    t = repete_letras(t, 3);
    fputs(t, stdout);

    printf("\n");

    free(t);
}