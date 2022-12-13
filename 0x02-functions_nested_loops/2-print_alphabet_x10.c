#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		alpha = 'a';
		i++;
	}
}
