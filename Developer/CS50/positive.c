#include <cs50.h>
#include <stdio.h>

int main (void)
{
	int n;
	do
	{
	    printf("Input a positive interger: ");
	    n = GetInt();	
	}
	while(n <= 0);
	printf("thank you for the int %i!\n", n);


return 0;
}
