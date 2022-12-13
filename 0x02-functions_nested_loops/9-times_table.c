#include "main.h"

/**
 * times_table - print every minute of the day
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, temp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			temp = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (temp >= 10)
			{
				_putchar((temp / 10) + '0');
				_putchar((temp % 10) + '0');
			}
			else if (temp < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((temp % 10) + '0');
			}
			else
			{
				_putchar((temp % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
