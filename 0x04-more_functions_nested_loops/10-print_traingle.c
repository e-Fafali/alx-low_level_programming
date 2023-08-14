#include "main.h"
#include <stdio.h>

/**
 * print_traingle - a function to print right angle
 * traingle
 *
 * @size: a parameter to determin the size of the 
 * triangle
 *
 * Return: 0
 */
void print_traingle(int size)
{
	int i;
	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar(35);
		}
	}
	else
	{
		_putchar('\n');
	}

	/* return (0); */
}
