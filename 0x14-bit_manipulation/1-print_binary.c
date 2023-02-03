#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int i, tmp;

	if (n == 0)
		_putchar('0');

	for (tmp = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		tmp = 1;
		if (tmp == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
