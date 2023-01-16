#ifndef DOH_H
#define DOG_H

/**
 * struct dog - Define data for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);

#endif
