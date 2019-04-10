#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "solidos.h"

int main(int argc, char **argv)
{
    if(strcmp(argv[1], "-cone") == 0)
    {
        cone c;
        c.altura = atof(argv[2]);
        c.raio = atof(argv[3]);
        float volume = volume_cone(c);
        printf("Volume cone: %.2f\n", volume);
    }

    else if(strcmp(argv[1], "-cilindro") == 0)
    {
        cilindro c;
        c.altura = atof(argv[2]);
        c.raio = atof(argv[3]);
        float volume = volume_cilin(c);
        printf("Volume cilindro: %.2f\n", volume);
    }

    else if(strcmp(argv[1], "-esfera") == 0)
    {
        esfera e;
        e.raio = atof(argv[2]);
        float volume = volume_esfera(e);
        printf("Volume esfera: %.2f\n", volume);
    }

    else if(strcmp(argv[1], "-paralel") == 0)
    {
        paralel p;
        p.lado = atof(argv[2]);
        p.altura = atof(argv[3]);
        p.comp = atof(argv[4]);
        float volume = volume_paralel(p);
        printf("Volume paralelepipedo: %.2f\n", volume);
    }
    
    else
    {
        printf("O metodo devera ser:\n./volume -cone altura raio\n./volume -cilindro altura raio\n./volume -esfera raio\n./volume -paralel lado altura comprimento\n");
    }
}
