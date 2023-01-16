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
		d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)");
		d->age > 0 ? printf("Age: %f\n", d->age) : printf("Age: (nil)");
		d->owner ? printf("Owner: %s\n", d->name) : printf("Owner: (nil)");
	}
}
