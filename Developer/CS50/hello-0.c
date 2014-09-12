#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Name: ");
    string name = GetString();
    printf("Hello, %s\n", name);
}
