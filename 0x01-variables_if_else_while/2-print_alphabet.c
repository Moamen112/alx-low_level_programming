#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c = 'a';

	for (int i = c; i <= 'z'; i++)
	{
		printf("%c", i);
	}

	printf("\n");

	return (0);
}
