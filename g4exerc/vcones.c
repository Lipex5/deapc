#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "solidos.h"

int main(int argc, char **argv)
{
    int ncones = atoi(argv[1]);
    cone *p = (cone*) malloc(ncones * sizeof(cone));

    for(int i = 0; i < ncones; i++)
    {
        novo_cone((p + i));
    }

    printf("Cones: %d\n", ncones);
    for(int i = 0; i < ncones; i++)
    {
        printf("%d] raio:  %.2f   altura:  %.2f\n", i + 1, (*(p + i)).raio, (*(p + i)).altura);
    }
}