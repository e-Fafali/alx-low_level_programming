#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print numbers of base 16
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	char base16_1 = '0';
	char base16_a = 'a';

	/* Usung a while loop to iterate ch*/
	while (base16_1 <= '9')
	{
		putchar(base16_1);
		base16_1++;
	}
	while (base16_a <= 'f')
	{
		putchar(base16_a);
		base16_a++;
	}
	putchar('\n');

	return (0);
}
