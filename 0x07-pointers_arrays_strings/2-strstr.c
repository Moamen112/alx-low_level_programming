#include "main.h"

/**
 * _strstr - find the occurence of a word
 * @haystack: Pointers to search in
 * @needle: Pointer to search for occurance
 * Return: a pointer from the word occured
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (hatstack);

	while (*hatstack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;	
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
