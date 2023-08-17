#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, x;
	char *vox;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	vox = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			/* let's do some thing weird*/
			printf("%02hhx\n", vox[x]);
			break;
		}
		printf("%02hhx ", vox[x]);
	}
	return (0);
}
