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

ResCifra* cifra_file(char* fin, int desvio, char* fout)
{
    ResCifra *vals = malloc(sizeof(ResCifra));
    FILE *filein = fopen(fin, "r");
    FILE *fileout = fopen(fout, "w");
    
    char buffer[100];
    vals->desvio = desvio;
    vals->nomef = fin;
    vals->validos = 0;
    vals->totalcar = 0;

    while (!feof(filein))
    {
        fgets(buffer, 100, filein);
        vals->validos += cifrastring(buffer, desvio);
        vals->totalcar += strlen(buffer);
        fputs(buffer, fileout);
        fputs("\n", fileout);
    }
    fclose(filein);
    fclose(fileout);
    return vals;
}


