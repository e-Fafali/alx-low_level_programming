#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Let's copy some strings
 *
 * @dest: where to copy to
 * @src: where to copy from
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x) != '\0'; x++)
	{
		dest[x] = *(src + x);
	}
	dest[x] = '\0';

	return (dest);
}
