#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: Nothing to return
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
