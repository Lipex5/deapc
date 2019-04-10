#include <stdio.h>

char* lefrase()
{
    int end = 0;
    char *vect = malloc(81 * sizeof(char));
    fgets(vect, 80, stdin);
    for(int i = 0; *(vect + i) < '\0'; i++)
    {
        end++;
    }
    vect = realloc(vect, end * sizeof(char));
    return vect;
}