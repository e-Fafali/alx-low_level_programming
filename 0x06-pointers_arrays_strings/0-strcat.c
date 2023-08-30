#include "main.h"

/**
 * _strcat - concatenates string2 to string1
 *
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	x = 0;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
