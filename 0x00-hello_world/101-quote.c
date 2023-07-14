#include <stdio.h>

/**
 * main - Main code
 *
 * putchar: prints an output
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	#define MAXSTRING 80
	int count = 0;
	char words[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (count = 0; count < MAXSTRING; count++)
	{
		if (words[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(words[count]);
	}

	return (1);
}
