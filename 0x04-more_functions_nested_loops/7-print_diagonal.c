#include "main.h"
#include<stdio.h>

/**
 * print_diagonal - print a diagonal line with putchar using an '\'
 *
 * @n: a variable that determines the lenght of the line
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
