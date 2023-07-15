#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print all conbintion of 2
  * digit numbers from 0-9 seperated by ',' & ' ' except the last num.
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	int num;
	int num2;

	/* Usung a while loop to iterate ch*/
	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar('0' + num);
				putchar('0' + num2);
				if (num != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
