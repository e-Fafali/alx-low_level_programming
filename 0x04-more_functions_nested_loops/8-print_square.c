#include "main.h"
#include<stdio.h>

/**
 * print_square - print a square line with putchar using an '#'
 *
 * @size: a variable that determines the size of the square
 *
 * Return: 0 Always
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
