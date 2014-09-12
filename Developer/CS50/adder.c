#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // ask user for input
    printf("Give me a integer: ");
    int x = GetInt();
    printf("Give me another integer: ");
    int y = GetInt();
    
    // do math - sum
    printf("The sum of %d and %d is %d!\n", x, y , x + y);
}
