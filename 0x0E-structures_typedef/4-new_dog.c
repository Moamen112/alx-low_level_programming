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
	dog_t *dog;

	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(owner_len * sizeof(dog->owner));
	if (dog-owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
