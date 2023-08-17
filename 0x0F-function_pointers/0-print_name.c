#include <stdio.h>

/**
 * print_name - calls a func to print a name
 * @name: param
 * @f: pointer variable
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
	else
		return;
}
