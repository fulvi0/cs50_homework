// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

		printf("table of triangular numbers\n\n");
		printf("3      * from 1 to n\n");
		printf("---     -------------\n");

		triangularNumber = 0;

		for (n = 1; n <= 10; ++n)
		{
			triangularNumber = triangularNumber + 3;
			printf("%i            %i\n", n, triangularNumber);
		}
		
	return 0;
}
