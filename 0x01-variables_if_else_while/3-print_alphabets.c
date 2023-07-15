#include <stdio.h>

/**
  * main - main code
  *
  * Description: Using putchar to print alphabets (From A-Z & a-z)
  *
  * putchar(): A function that prints out a character
  *
  * Return: Always (0)
 */

int main(void)
{
	char alpha_bt1 = 'a';
	char alpha_bt2 = 'A';

	/* Usung a while loop to iterate ch*/
	while (alpha_bt1 <= 'z')
	{
		putchar(alpha_bt1);
		alpha_bt1++;
	}
	while (alpha_bt2 <= 'Z')
	{
		putchar(alpha_bt2);
		alpha_bt2++;
	}
	putchar('\n');

	return (0);
}
