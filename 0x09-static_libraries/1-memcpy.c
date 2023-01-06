#include "main.h"

/**
 *_memcpy - Copies memory area
 * @dest: pointer to a destination memory
 * @src: pointers to source memory
 * @n: the number of bytes to copy
 * Return: return address to dest pointers
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
