/*
CS50 pset01 - mario.c
Carlos F. Antonio 
fulvio.ac@gmail.com
SDQ Dominican Republic
02/23/2014
*/

#include <cs50.h>
#include <stdio.h>

int main ()
{
    int height = 0;
    
    do
    {
        printf("Please input a int for the height, > 1, < 23: ");
        height = GetInt();
    }
    
    while (height < 1 || height > 23);
    
    for (int counter = 0; counter < height; counter++)
    {
        for (int space = 0; space < height-counter-1;space++)
        {
        printf("%s"," ");
        }
            for (int hash = 0; hash < counter+1; hash++)
        {
                printf("#");
        }
            printf("%s"," ");
            for (int hash = 0; hash < counter+1; hash++)
        {
                printf("#");
                
        }      
                printf("\n");
    } 
        return 0;
}
