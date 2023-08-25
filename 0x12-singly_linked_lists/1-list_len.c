#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - a function to print the elements of a singly
 * linked list
 * @h: list to be printed
 *
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	/* number of nodes */
	size_t n = 0;

	/* mkae sure h != NULL */
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
