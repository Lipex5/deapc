#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dvds.h"

//*****************
char* rented(dvd *d)
{
    if((*d).isRented == 1)
        return "Yes";

    else
        return "No";
}
//*****************

int getSpace()
{
    int n;
    printf("Insert the number of DVD's you want to store: ");
    scanf(" %d", &n);
    printf("\n");
    return n;
}

dvd createDVD(int total)
{
    dvd *d = (dvd*) malloc(total * sizeof(dvd));
    return *d;
}

void addDVD(dvd *d)
{
    printf("Insert the DVD's name (max 50 characters): \n");
    getchar();
    fgets(d->name, 20, stdin);
    printf("\nInsert the DVD's genre: ");
    fgets(d->genre, 8, stdin);
    do
    {
        printf("Is it rented?(1 for true and 0 for false): ");
        scanf(" %d", &d->isRented);
    }while(d->isRented != 0 && d->isRented != 1);
}

void printTerror(int total, dvd *d)
{
    printf("The movies with the genre 'terror' are: \n");
    for(int i = 0; i < total; i++)
    {
        if(strcmp((*(d + i)).genre,"terror")) 
        {
            printf("Name: %s\nRented: %s", (d + i)->name, rented(d + i));
        }
    }
}

void printRented(int total, dvd *d)
{
    printf("The movies that are rented are: \n");
    for(int i = 0; i < total; i++)
    {
        if((*(d + i)).isRented == 1)
        {
            printf("Name: %s\nGenre: %s", (d + i)->name, (d + i)->genre);
        }
    }
}