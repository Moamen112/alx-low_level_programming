#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog allocated memory
 * @d: struct pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
