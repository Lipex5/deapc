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

    else if((L > 96) && (L < 123)) // a - z
        if(result > 122)
            result -= 26;

    else if((L > 64) && (L < 91)) // A - Z
        if(result > 90)
            result -= 26;

    else
    {
        printf("Wrong character!");
        result = 95;  // <------- CHECK THIS!!! NOT WORKING!!! 
    } 

    return (char) result;
}

int cifrastring(char *str, int desvio)
{
    int num = 0;
    char *final = (char*) malloc(strlen(str) + 1);

    for(int i = 0; i < strlen(str); i++)
    {
        *(final + i) = cifra(*(str + i), desvio);
        if((int) *(final + i) != 95 && *(final + i) != ' ')
            num++;
    }

    return num;
} 