#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - A variadic function that print's numbers
 * @format: holds the type of arguments
 */
void print_all(const char * const format, ...)
{
		va_list log;
		unsigned int x, i, h = 0;
		char *str;
		const char type[] = "cifs";

		va_start(log, format);
		/* where it all begins */
		while (format && format[i])
		{
			x = 0;
			while (type[x])
			{
				if (format[i] == type[x] && h)
				{
					printf(", ");
					break;
				} x++;
			}
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(log, int)), h = 1;
					break;
				case 'i':
					printf("%d", va_arg(log, int)), h = 1;
					break;
				case 'f':
					printf("%f", va_arg(log, double)), h = 1;
					break;
				case 's':
					str = va_arg(log, char *), h = 1;
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
			} i++;
		}
		printf("\n"), va_end(log);
}
