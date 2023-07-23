#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 *
 * @c: the variable to be checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
