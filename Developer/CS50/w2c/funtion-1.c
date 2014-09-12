#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);

int main(void)
{
	int n = GetPositiveInt();
	printf("Thanks for the positive %i!\n", n);
}

int GetPositiveInt(void)
{
	int n;
	do
	{
		printf("Give me a positive interger: ");
		n = GetInt();
	}
	while (n <= 0);
	return n;
}