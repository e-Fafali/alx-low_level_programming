#ifndef LISTS_H
#define LISTS_H

/* Libraries */
#include <stdlib.h>


/**
 * struct list_s - singly linked list
 *
 * @str: string -(malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 *
 * Description: singl llinked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototype for a linked list */
int _putchar(char c);

/* This function printts the elements of a linked list */
size_t print_list(const list_t *h);

/* This function printts the number of elements in a linked list */
size_t list_len(const list_t *h);

#endif
