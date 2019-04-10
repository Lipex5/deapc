#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

int main(int argc, char **argv)
{
    if (argc != 5)
    {
        printf("The argument should be $cifcesar -k number -f file or $cifcesar -f file -k number\n");
        return 0;
    }

    else
    {
        int k, c;
        char file_name[20];
        FILE *file;

        if (strcmp(argv[1], "-f") == 0)
        {
            strcpy(file_name, argv[2]);
        }

        else if (strcmp(argv[1], "-k") == 0)
        {
            k = atoi(argv[2]);
        }

        else if (strcmp(argv[3], "-f") == 0)
        {
            strcpy(file_name, argv[4]);
        }

        else if (strcmp(argv[3], "-k") == 0)
        {
            k = atoi(argv[3]);
        }

        else
        {
            printf("Wrong syntax.\n");
            return 0;
        }

        if ((file = fopen(file_name, "r")) == NULL)
        {
            fprintf(stderr, "There is something wrong with the file %s:", file_name);
            perror(" ");
            return 1;
        }

        while((c = fgetc(file)) != EOF)
        {
            printf("%c", cifra(c, k));
        }
        printf("\n");
        fclose(file);
        return 0;
    }
}
