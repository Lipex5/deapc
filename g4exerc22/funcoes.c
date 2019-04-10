#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cifra(char letra, int desvio)
{
    int L = (int) letra, result;

    while(desvio > 26)
        desvio -= 26;

    result = L + desvio;

    if(letra == ' ')
        return ' ';

    else if(L > 96 && L < 123) // a - z
        if(result > 122)
            result -= 26;

    else if(L > 64 && L < 91) // A - Z
        if(result > 90)
            result -= 26;
    
    else
    {
        printf("Wrong character!");
        return 0;
    }

    return (char) result;
}
