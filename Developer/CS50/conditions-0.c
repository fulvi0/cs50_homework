#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // ask user for a integer
    printf("I'd like an interger please: ");
    int n = GetInt();
    
    // analyze user's input (somewhat inaccurately)
    if (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    else if (n == 0)
    {
        printf("0 is neutral\n");
    }
    else 
    {
        printf("You picked a negative number!\n");
    }
}
