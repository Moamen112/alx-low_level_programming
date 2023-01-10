#include <stdlib.h>

/**
 * _strdup - copies a string into a new array
 * @str: the string to copy
 * Return: a pointer to a newly allocated space in memory,
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	arr = malloc(len * sizeof(char));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
