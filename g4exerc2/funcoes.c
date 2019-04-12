#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

char cifra(char letra, int desvio)
{
    int L = (int) letra, result;

    while(desvio > 26)
        desvio -= 26;

    result = L + desvio;

    if((L > 96) && (L < 123)) // a - z
    {
        if(result > 122)
            result -= 26;
    }

    else if((L > 64) && (L < 91)) // A - Z
    {
        if(result > 90)
            result -= 26;
    }

    else
    {
        return 100; 
    } 

    return (char) result;
}

int cifrastring(char *str, int desvio)
{
    int num = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        *(str + i) = cifra(*(str + i), desvio);
        if((int) *(str + i) == 100)
        {  
            *(str + i) = '_';
            num++;
        }
    }
    return strlen(str) - num;
} 

ResCifra* cifra_file(FILE *fin, int desvio, FILE *fout)
{
    ResCifra valores;
    char buffer[100];

    while (!feof(fin))
    {
        fgets(buffer, 100, fin);
        valores.validos = cifrastring(buffer, desvio);
    }
}
