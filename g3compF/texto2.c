#include <stdio.h>

char* elcaracar()
{
    int end;
    char *vect = malloc(81 * sizeof(char));
    
    for(int i = 0; i < 81; i++)
    {
        scanf(" %c", (vect + i));
        if(*(vect + i) == '#')
        {
            break;
            end = i;
        }
    }
    vect = realloc(vect, end * sizeof(char));
    return vect;
}