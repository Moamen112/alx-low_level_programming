#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: Nothing
 */

void jack_bauer(void)
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
