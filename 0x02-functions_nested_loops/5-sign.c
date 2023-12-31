/* #include <stdio.h> */
#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: stores the value of the input
  * Return: -1 or 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n == 0)
	{
		_putchar('0');
	}
	return (0);

}
