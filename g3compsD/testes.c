#include <stdio.h>
#include "funcoes.h"

int main()
{
    char c = 'a';
    char pal[5] = "anita";
    char frase[26] = "a anita e linda e eu amo-a";

    printf("%d, %d, %d\n", contachar(c, frase), numdepals(frase), contapal(pal, frase));
}