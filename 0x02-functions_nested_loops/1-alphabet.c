#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
	}

	_putchar('\n');
	return (0);
}
