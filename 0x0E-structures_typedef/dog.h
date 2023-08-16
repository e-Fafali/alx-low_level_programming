#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info on a dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member.
 *
 * Description - this a struct for information about a
 * dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
