#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: a variable
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int ch, x;

	ch = 0;

	while (s[ch] != '\0')
	{
		ch++;
	}
	for (x = ch - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');

}
