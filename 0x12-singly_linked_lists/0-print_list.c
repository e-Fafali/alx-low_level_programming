#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function to print the elements of a singly
 * linked list
 * @h: list to be printed
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	/* number of nodes */

	size_t n = 0;

	/* mkae sure h != NULL */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}

	return (n);
}
