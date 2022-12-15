#include "main.h"

/**
 * print_most_numbers - Print most of the numbers
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
