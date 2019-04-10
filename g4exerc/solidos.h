#define PI 3.14159

typedef struct cones
{
    float altura, raio;
}cone;

typedef struct cilindros
{
    float altura, raio;
}cilindro;

typedef struct esferas
{
    float raio;
}esfera;

typedef struct paralelepipedos
{
    float lado, altura, comp;
}paralel;

float volume_cone (cone c);
float volume_cilin (cilindro c);
float volume_esfera (esfera e);
float volume_paralel (paralel p);
void novo_cone(cone *c);