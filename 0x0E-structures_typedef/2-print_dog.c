#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function to innitialize struct
 * dog
 *
 * @d: pointer to struct's name
 *
 * Return: 0.
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
