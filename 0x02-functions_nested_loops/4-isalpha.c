/* #include <stdio.h> */
#include "main.h"

/**
  * _islower - check if the entered value is lowercase
  * @c: stores the value of the input
  * Return: 0 or 1
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
