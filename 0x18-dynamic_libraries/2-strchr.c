#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: pointer to a string
 * @c: character to locate
 * Return: Pointer to the first occurance of a character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
