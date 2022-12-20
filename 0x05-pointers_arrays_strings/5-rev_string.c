 #include "main.h"

/**
 * rev_string - Reverse a string
 * @s: the strong
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char str[10000];

	i = j = 0;

	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}

	i--;

	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}

	s[j++] = '\0';
}
