#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: the integer value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	/* Allocate memory for the new node */
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	/* Initialize the new node */
	n_node->n = n;
	n_node->next = *head;

	/* Update the head pointer */
	*head = n_node;

	return (new_node);
}
