#include "main.h"

/**
 * times_table - print every minute of the day
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, temp = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			temp *= 2;
			_putchar(temp);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
		temp = i;

	}

	_putchar('\n');

}
