#include <cs50.h>
#include <stdio.h>
 
int main (void)
{
    //ask the user for input a integer
    printf("Input a int: ");
    //GetInt came from the cs50 library
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
return;
}
