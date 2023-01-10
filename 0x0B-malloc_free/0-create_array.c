#include <stdio.h>

/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size > 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr == (NULL))
			return (NULL);
	}
	else
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
