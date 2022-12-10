#include <stdio.h>

/**
 * main - prints alphabet but q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}

	putchar('\n');
	return (0);
}
