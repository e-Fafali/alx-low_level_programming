#include <stdio.h>
#include "main.h"

/**
 * main - Main code
 *
 * _putchar: prints an output
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	#define MAXSTRING 80
	int count = 0;
	char words[] = "_putchar";

	for (count = 0; count < MAXSTRING; count++)
	{
		if (words[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(words[count]);
	}

	return (1);
}
