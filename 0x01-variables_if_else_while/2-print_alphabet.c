#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	printf("\n");

	return (0);
}
