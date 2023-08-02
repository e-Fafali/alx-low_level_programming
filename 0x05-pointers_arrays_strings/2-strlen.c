#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that swaps 2 numbers
 *
 * @s: a pointer variable
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int ch;

	ch = 0;

	while (s[ch] != '\0')
	{
		ch++;
	}
	return (ch);
}
