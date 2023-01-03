#include "main.h"

/**
 * _strpbrk: searches a string for any of set of bytes
 * @s: pointer to the string
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such a byte is found
 */

char *_strpbrk(char *s, char *accpet)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
