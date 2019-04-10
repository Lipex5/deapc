#include <stdio.h>
#include "dvds.h"
#include "functions.h"

int main()
{
    int total = getSpace();
    dvd *dvds = (dvd*) malloc(total * sizeof(dvd));
    
    for(int i = 0; i < total; i++)
    {
        addDVD(dvds + i);
    }

    printTerror(total, dvds);
    printRented(total, dvds);
}