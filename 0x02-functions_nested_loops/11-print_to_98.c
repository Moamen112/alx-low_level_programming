#include "main.h"

/**
 * print_to_98 - print from n to 98
 *@c: number to start with
 * Return: Nothing
 */

void print_to_98(int c)
{
	int i;

	if (c > 98)
	{
		for (i = c; i >= 98; i--)
		{
			if (i == 98)
			{
				_putchar(i);
				_putchar(' ');
			}
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (c == 98)
	{
			_putchar(c);
			_putchar('\n');
	}
	else
	{
		for (i = c; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar(i);
				_putchar(' ');
			}
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
