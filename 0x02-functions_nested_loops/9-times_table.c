/* #include <stdio.h> */
#include "main.h"

/**
  * jack_bauer - prints the minutes of 24 hours
  *
  * Return: Always (0)
 */

void times_table(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 9; hour++)
	{
		for (min = 0; min <= 9; min++)
		{
			if (min >= 9 || hour >= 9)
			{
				_putchar((hour * min) + '0');
			}
			else
			{
				_putchar((hour * min) + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	/* return (0); */
}
