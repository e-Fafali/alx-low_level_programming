#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a variable
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int ch;

	ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');

}
