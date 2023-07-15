#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print alphabets in reverse
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	char alpha_bt  = 'z';

	/* Usung a while loop to iterate ch*/
	while (alpha_bt >= 'a')
	{
		putchar(alpha_bt);
		alpha_bt--;
	}
	putchar('\n');

	return (0);
}
