#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h <= 12)
	{
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');

			if (h == 12 && m == 59)
				break;
	
			
			_putchar('\n');
		}
	}
}
