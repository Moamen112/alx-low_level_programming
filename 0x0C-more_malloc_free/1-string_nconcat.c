#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * @n: Number of bytes of the second string to use
 *
 * Return: Pointer to the concatenated string.
 *         NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, len_s1 = 0, len_s2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len_s1++;
	for (i = 0; s2[i]; i++)
		len_s2++;
	if (n > len_s2)
		n = len_s2;
	res = malloc(sizeof(char) * (len_s1 + n + 1));
	if (!res)
		return (NULL);
	for (i = 0; s1[i]; i++)
		res[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		res[i] = s2[j];
	res[i] = '\0';
	return (res);
}
