#include <stdio.h>

/**
 * main - print from 0 to 16 in hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
