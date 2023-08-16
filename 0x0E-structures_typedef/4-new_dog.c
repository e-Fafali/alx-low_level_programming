#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function to create a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	
	int i = 0, j = 0, k;
	dog_t *dog_a;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog_a = malloc(sizeof(dog_t));
	if (dog_a == NULL)
	{
		free(dog_a);
		return (NULL);
	}
	dog_a->name = malloc(i * sizeof(dog_a->name));
	if (dog_a->name == NULL)
	{
		free(dog_a->name);
		free(dog_a);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog_a->name[k] = name[k];
	dog_a->age = age;
	dog_a->owner = malloc(j * sizeof(dog_a->owner));
	if (dog_a->owner == NULL)
	{
		free(dog_a->owner);
		free(dog_a->name);
		free(dog_a);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog_a->owner[k] = owner[k];
	return (dog_a);
	


}
