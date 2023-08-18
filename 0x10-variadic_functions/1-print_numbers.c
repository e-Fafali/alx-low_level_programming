#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - A variadic function that print's numbers
 *
 * @separator: holds a comma or space or etc
 * @n: one const variable
 * @...: LEt's keep them guessing
 *
 * Return: 0 if n == 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list log;

		unsigned int x;

		va_start(log, n);
		/* where it all begins */

		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(log, int));

			if (x < (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");

		va_end(log);
	}
}
