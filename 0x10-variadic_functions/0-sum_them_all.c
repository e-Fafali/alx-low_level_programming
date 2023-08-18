#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A variadic function that adds stuff up
 *
 * @n: one const variable
 * @...: LEt's keep them guessing
 *
 * Return: 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list log;

		unsigned int x;
		int sum = 0;

		va_start(log, n);
		/* where it all begins */

		for (x = 0; x < n; x++)
		{
			sum += va_arg(log, int);
		}

		va_end(log);

		return (sum);
	}
	else
		return (0);

}
