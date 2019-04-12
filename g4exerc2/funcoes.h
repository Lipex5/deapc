char cifra(char letra, int desvio);
int cifrastring(char *str, int desvio);

typedef struct ResCifra
{
    int totalcar;
    int desvio;
    int validos;
    char *nomef;
}ResCifra;

ResCifra* cifra_file(char *fin, int desvio, char *fout);
