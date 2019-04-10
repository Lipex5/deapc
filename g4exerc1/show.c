#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char file[20], buffer[200], enter;
    strcpy(file, argv[1]);
    FILE *text = fopen(file, "r");
    int end = 0, n = 0, lines;

    if(strcmp(argv[2], "n") == 0)
        end = atoi(argv[3]);

    else
        end = 5;


    if((text == NULL))
    {
        fprintf(stderr, "Can't read file ");
        perror("because");
        return 1;
    }

    lines = end;

    int boolean = 1;
    while(boolean && !feof(text)){
        while(!feof(text) && n < end )
        {
            fgets(buffer, 20, text);
            printf("%s", buffer);
            n++; 
        }

        do
        {
            scanf("%c", &enter);
        } while (enter != '\n');
        
         end += lines;
       
    }
    
    printf("\n");
    fclose(text);
}