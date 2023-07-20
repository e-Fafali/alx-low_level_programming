#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - as described
 */


void print_alphabet(void)
{
	char alpha =	'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

	/* return (0); */
}
