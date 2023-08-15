#include "dog.h"

/**
 * init_dog - a function to innitialize struct
 * dog
 *
 * @d: pointer to struct's name
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
