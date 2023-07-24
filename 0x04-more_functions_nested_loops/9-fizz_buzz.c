#include <stdio.h>

/**
 * main - main code
 *
 * Return: always 0
 */

int main(void)
{
	int i; 

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 )
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz ");
		}
		else 
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
