#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t.
 *	list at a given position.
 *
 * @head: A pointer to the address of the head
 *	of the listint_t list.
 *
 * @idx: The index of the listint_t list where the new node
 *	should be added - indices start at 0.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *	Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_new, *copy = *head;
	unsigned int node;

	n_new = malloc(sizeof(listint_t));
	if (n_new == NULL)
		return (NULL);

	n_new->n = n;

	if (idx == 0)
	{
		n_new->next = copy;
		*head = n_new;
		return (n_new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	n_new->next = copy->next;
	copy->next = n_new;

	return (n_new);
}
