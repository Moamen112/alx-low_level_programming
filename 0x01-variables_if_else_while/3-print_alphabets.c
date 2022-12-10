#include <stdio.h>

/**
 * main - prints alpha in lower then upper
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
