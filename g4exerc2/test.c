#include <stdio.h>
#include "funcoes.h"

int main()
{
    char string[14] = "Hello world??";
    
    /*for(int i = 0; i < 14; i++)
    {
        printf("%c", cifra(string[i], 3));
    }*/

    printf("%d\n%s\n", cifrastring(string, 3), string);
}