/* #include <stdio.h> */
#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: stores the value of the input
  * Return: -1 or 0 or 1
 */

int print_last_digit(int n)
{

	int x = n % 10;

	if (x < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
	}
	return (x);
}
