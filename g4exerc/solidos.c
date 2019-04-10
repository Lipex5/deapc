#include <stdio.h>
#include <stdlib.h>
#include "solidos.h"

float volume_cone(cone c)
{   return ((1.0 / 3.0) * c.altura * PI * c.raio * c.raio);}

float volume_cilin(cilindro c)
{   return (PI * c.raio * c.raio * c.altura);}

float volume_esfera(esfera e)
{   return ((4.0 / 3.0) * PI * e.raio * e.raio * e.raio);}

float volume_paralel(paralel p)
{   return (p.lado * p.altura * p.comp);}

void novo_cone(cone *c)
{
    printf("Insira a altura: ");
    scanf(" %f", &(c -> altura));
    printf("\nInsira o raio: ");
    scanf(" %f", &(c -> raio));
    printf("\n");
}

