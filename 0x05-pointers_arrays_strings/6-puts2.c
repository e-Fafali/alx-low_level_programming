#include "main.h"

/**
 * puts2 - printing every other number.
 *
 * @str: the string to be worked on
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
