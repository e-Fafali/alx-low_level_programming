#include "main.h"
#include<stdio.h>

/**
 * print_line - print a line with putchar using an '_'
 *
 * @n: a variable that determines the lenght of the line
 *
 * Return: 0 Always
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
