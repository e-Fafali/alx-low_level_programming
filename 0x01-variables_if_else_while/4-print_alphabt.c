#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print alphabets except q and e
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	char alpha_bt  = 'a';

	/* Usung a while loop to iterate ch*/
	while (alpha_bt <= 'z')
	{
		if (alpha_bt != 'e' && alpha_bt != 'q')
		{
			putchar(alpha_bt);
		}
		alpha_bt++;
	}
	putchar('\n');

	return (0);
}
