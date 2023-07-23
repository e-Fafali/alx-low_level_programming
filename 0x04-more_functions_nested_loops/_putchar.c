#include <unistd>

/**
 * _putchar - writes the x'ter c to stdout
 * @c: the x'ter to print
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropraitely
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
