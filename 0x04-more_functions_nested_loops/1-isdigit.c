#include "main.h"

/**
 * _isdigit - check if a value is a number
 *
 * @c: the variable to be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
