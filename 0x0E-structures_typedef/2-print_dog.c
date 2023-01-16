#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: struct name
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name != NULL ? printf("Name: %s\n", d->name) : printf("(nil)");
		d->age > 0 ? printf("Age: %f\n", d->age) : printf("(nil)");
		d->owner != NULL ? printf("Owner: %s\n", d->name) : printf("(nil)");
	}
}
