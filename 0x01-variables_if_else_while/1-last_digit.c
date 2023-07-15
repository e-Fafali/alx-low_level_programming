#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - Main code
  * Description: a code to print the last digit of a number
  * and determine if its less than 6 or 0
  * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if code */
	q = n % 10;
	if (q > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, q);
	}
	else if (q == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, q);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, q);
	}

	return (0);
}
