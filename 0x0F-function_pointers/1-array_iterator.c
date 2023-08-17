#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function pointer to iterate an array
 * @array: param
 * @size: size of array
 * @action: print the elements
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
