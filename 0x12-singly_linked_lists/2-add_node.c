#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - a function that adds a new node at the
 * begining of a singly linked list
 *
 * @head: the first node
 * @str: string to add
 *
 * Return: The address of the new element or null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	/* new nodes*/
	list_t *n_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	n_node = malloc(sizeof(list_t));

	if (!n_node)
	{
		return (NULL);
	}

	/* use strup to duplicate the string */
	n_node->str = strdup(str);

	/* Did we succced? */
	if (n_node->str == NULL)
	{
		free(n_node);  /* let's clean */
		return (NULL);
	}

	/* Let's add some new stuff */
	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
