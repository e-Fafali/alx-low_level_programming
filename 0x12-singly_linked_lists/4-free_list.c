#include <stdlib.h>
#include "lists.h"

/**
 * free_list - let's free some stuff
 *
 * @head: stuff to free
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp; /* temporary storage */

	while (head)
	{
		temp = head->next; /* store the next node's pointer */

		/* Let's free some stuff */
		free(head->str);
		free(head);

		head = temp;
	}
}
