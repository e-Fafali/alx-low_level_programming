#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
	return;

	current = *head;   /* Point to the head of the list. */

	while (current != NULL)

	{
		next = current->next;  /* Store the pointer to the next node. */
		free(current);         /* Free current node. */
		current = next;        /* Move to next node. */
	}

	*head = NULL;  /* Set head to NULL, since the list is now empty. */
}
