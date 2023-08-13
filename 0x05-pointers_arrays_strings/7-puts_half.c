#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints only half of a string
 *
 * @str: a variable
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int num = 0;

	/* count the elements in the array */
	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			break;
		}
		num++;
	}

	/* Checking for odd numbers */
	if ((num % 2) == 1)
	{
		i = num / 2;
	}
	else
	{
		i = (num - 1) / 2;
	}

	/* Let's print the half */
	for (i++; i < num; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
