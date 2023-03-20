#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes struct dog
 * @d: dog struct pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
