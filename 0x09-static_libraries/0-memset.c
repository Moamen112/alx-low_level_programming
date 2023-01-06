#include "main.h"

/**
 *_memset - fills memore wutg a constant byte
 * @s: pointer to a memore
 * @b: constant to fill
 * @n: the number of bytes to fill
 * Return: pointers to memore area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
