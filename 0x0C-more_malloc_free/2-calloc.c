#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * each, and returns a pointer to the allocated memory.
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory,
 * or NULL if malloc fails or nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
