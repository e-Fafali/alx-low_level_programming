#include "main.h"
#include<stdio.h>
/**
 * print_numbers - print numbers with putchar
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
