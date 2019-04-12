#include <stdio.h>
#include "funcoes.h"

int main()
{
    char string[12] = "Hello you..";
    
    for(int i = 0; i < 12; i++)
    {
        printf("%c", cifra(string[i], 3));
    }

    printf("%d\n", cifrastring("Hello world..", 1));
}