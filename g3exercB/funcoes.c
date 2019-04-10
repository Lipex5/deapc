#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* n_letras(int n)
{
    char *p;
    p = malloc((n+1) * sizeof(*p));

    for(int i = 0; i < n; i++)
    {
        //fgets(p, 2, stdin);
        scanf(" %c", (p + i));
    }

    return p;
}

char* repete_letras(char *vec, int nrep)
{
    //int step = 0;

    int len = ((strlen(vec) - 1) * nrep) + 1;

    char *t = malloc(len);

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < nrep; j++)
        {
            *(t + (i * nrep + j)) = *(vec + i);
        }
    }

    /*for(int i = 1; i < len; i++)
    {
        if (i % nrep == 0)
        {
            *(t + (i - 1)) = *(vec + step);
            printf("//%c %c//\n", *(t + (i - 1)), *(vec + (i - 1)));
        }

        else if (i % nrep != 0)
        {
            *(t + (i - 1)) = *(vec + step);
            step++;
        }
    }*/
    return t;
}

char* recebe_texto()
{
    int end;
    char *p = malloc(100 * sizeof(char));

    fgets(p, 1000, stdin);

    for(int i = 0; i < 1000; i++)
    {
        if(*(p + i) == '#' && *(p + (i - 1)) == '#')
        {
            end = i - 1;
            break;
        }
    }
    *(p + end) = '\0';

    p = realloc(p, (end + 1) * sizeof(char));
    return p;
}