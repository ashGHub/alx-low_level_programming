#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: dog pointer
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
