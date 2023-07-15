#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print base 10 numbers
  * from 0-9 seperated by ',' & ' ' except 9.
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	int num;

	/* Usung a while loop to iterate ch*/
	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
