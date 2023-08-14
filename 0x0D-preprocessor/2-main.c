#include <stdio.h>

/**
 * main - a code to print the mane of a file it was compiled from
 *
 * Return: 0;
 */

#define FILE __FILE__

int main(void)
{
	printf("%s\n", FILE);

	return (0);
}
