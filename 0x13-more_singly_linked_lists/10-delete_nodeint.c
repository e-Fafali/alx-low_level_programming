#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 *
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *holder;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		holder = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		holder->next = current->next;
	else
		holder->next = NULL;

	free(current);
	return (1);
}
