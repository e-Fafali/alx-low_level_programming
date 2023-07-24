#include "main.h"
#include<stdio.h>

/**
 * more_numbers - print more numbers with putchar
 *
 * Return: 0 Always
 */

void more_numbers(void)
{
	int i;

	int x = 0;

	while (x <= 9)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);

		}
		_putchar('\n');
		x++;
	}
}
