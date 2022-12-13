#include "main.h"

/**
 * times_table - print every minute of the day
 * Return: Nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j *= 2)
		{
			_putchar(j);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');

	}

	_putchar('\n');

}
