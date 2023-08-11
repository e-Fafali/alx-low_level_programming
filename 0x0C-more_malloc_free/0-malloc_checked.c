#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - a function that checks and allocate memory
 *
 * @d: value 
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
