#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print numbers with out a char type
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	int num = 0;

	/* Usung a for loop to iterate ch*/
	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
