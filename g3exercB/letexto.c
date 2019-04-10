#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int main()
{
    char *t;
    int sum = 0;
    int pals = 0;
    t = recebe_texto();
    int len = strlen(t);
    fputs(t, stdout);
    printf("\n");
    for(int i = 0; i < len; i++)
    {
        if(*(t + i) == 'a')
            sum++;

        if(*(t + i) == ' ')
            pals++;
    }
    printf("Dim: %d, A: %d, Pals: %d\n", len, sum, pals + 1);
    free(t);
}