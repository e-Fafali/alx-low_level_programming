#include "main.h"
#include<stdio.h>

/**
 * more_numbers - print more numbers with putchar
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
