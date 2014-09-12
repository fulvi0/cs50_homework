#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Input a integer: ");
    int i = GetInt();
    
    switch (i)
    {
           case 1:
           case 2:
           case 3:
                    printf("you picked a small number\n");
           break;
           
           case 4:
           case 5:
           case 6:
                    printf("you picked a medium number\n");
           break;
          
           case 7:
           case 8:
           case 9:
                    printf("you picked a large number\n");
           break;
           
           default:
                    printf("you picked a wrong numbre\n");
    }
}
