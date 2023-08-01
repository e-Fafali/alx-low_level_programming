#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps 2 numbers
 *
 * @a: a pointer variable
 * @b: a pointer variable
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int val = *a;

	*a = *b;
	*b = val;
}
