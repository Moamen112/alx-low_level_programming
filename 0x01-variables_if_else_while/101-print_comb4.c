#include <stdio.h>

/**
 * main - Prints all combinations of 3 digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if ((i == '7' && j == '8') && k == '9')
				{
					putchar('\n');
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}

	return (0);
}
