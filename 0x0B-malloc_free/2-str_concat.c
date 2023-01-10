#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int s1_count, s2_count, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_count = 0; s1[s1_count] != '\0'; s1_count++)
		;
	for (s2_count = 0; s2[s2_count] != '\0'; s2_count++)
		;
	size = s1_count + s2_count + 1;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (i < s1_count)
		{
			arr[i] = s1[i];
		}
		else
		{
			arr[i] = s2[i - s1_count];
		}
	}
	return (arr);
}
