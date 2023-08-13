#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that prints a string in reverse
 *
 * @s: a variable
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, size_a, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	/* Let's reverse it */
	size_a = i - 1;
	half = size_a / 2;
	while (half >= 0)
	{
		first = s[size_a - half];
		last = s[half];
		s[half] = first;
		s[size_a - half] = last;
		half--;
	}

}
