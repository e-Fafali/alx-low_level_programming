#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concat tw strings.
 * 
 * @s1: string 1
 * @s2: string 2
 * @n: index(list)
 *
 * Return: newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int size_1 = 0;
	unsigned int size_2 = 0; 
	unsigned int x;

	/*  */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* let's do some cutting : */

	while (s1[size_1] != '\0')
	{
		size_1++;
	}

	while (s2[size_2] != '\0')
	{
		size_2++;
	}

	if (n > size_2)
	n = size_2;
	m = malloc((size_1 + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);

	for (x = 0; x < size_1; x++)
	{
		m[x] = s1[x];
	}

	for (; x < (size_1 + n); x++)
	{
		m[x] = s2[x - size_1];
	}
	m[x] = '\0';

return (m);
}
