#include <stdio.h>

/**
 * main - prints all combination of 2 numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
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

	putchar('\n');
	return (0);
}
