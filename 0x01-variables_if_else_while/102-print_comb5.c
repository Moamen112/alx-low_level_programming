#include <stdio.h>

/**
 * main - print all possible combination of two-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 98)
	{
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
			{
				putchar('\n');
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}

	return (0);
}
