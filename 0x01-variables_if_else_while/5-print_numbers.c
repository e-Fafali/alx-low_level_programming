#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print base 10 numbers from 0-9
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	char num = '0';

	/* Usung a while loop to iterate ch*/
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
