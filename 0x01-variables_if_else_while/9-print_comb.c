#include <stdio.h>

/**
 * main - prints all combination of a single digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}

	putchar('\n');
	return (0);
}
