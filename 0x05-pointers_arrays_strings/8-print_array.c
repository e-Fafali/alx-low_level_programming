#include <stdio.h>
#include "main.h"

/**
 * print_array - we're prining arrays
 *
 * @a: for arrays
 * @n: number of elements in the array
 *
 * return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
