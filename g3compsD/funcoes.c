int contachar(char c, char *vect)
{
    int sum = 0;

    for(int i = 0; i < sizeof(vect)/sizeof(vect[0]); i++)
    {
        if(vect[i] == c)
            sum++;
    }

    return sum;
}

int numdepals(char *vect)
{
    int space = 0;

    for(int i = 0; i < sizeof(vect)/sizeof(vect[0]); i++)
    {
        char space = ' ';
        if(vect[i] == space)
            space++;
    }
    return space;
}

int contapal(char *pal, char *vect)
{
    int pals = 0;

    for(int i = 0; i < sizeof(vect)/sizeof(vect[0]); i++)
    {
        if(vect[i] == *pal)
            pals++;
    }
    return pals;
}