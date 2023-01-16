#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns pointer to buffer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *doggy;

	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc((name_len + 1) * sizeof(doggy->name));
	doggy->owner = malloc((owner_len + 1) * sizeof(doggy->owner));

	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for(i = 0; i < name_len; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	doggy->age = age;

	if (doggy == NULL)
		return (NULL);
	else
		return (doggy);
}
