#include "main.h"

/**
 * print_times_table - print times table
 *@n: the number of rows
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, temp;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				temp = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (temp < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((temp % 10) + '0');
				}
				else if ((temp >= 10 && temp < 100))
				{
					_putchar(' ');
					_putchar((temp / 10) + '0');
					_putchar((temp % 10) + '0');
				}
				else if ((temp >= 100 && j != 0))
				{
					_putchar((temp / 100) + '0');
					_putchar((temp / 10) % 10 + '0');
					_putchar((temp % 10) + '0');
				}
				else
				{
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
