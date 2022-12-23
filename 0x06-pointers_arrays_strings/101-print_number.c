#include "main.h"

/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	unsigned int temp, pow, result;

	pow = 1;

	if (n >= 0)
		result = n * -1;
	else
	{
		result = n;
		_putchar('_');
	}

	temp = result;
	while (temp <= -10)
	{
		pow *= 10;
		temp /= 10;
	}

	while (pow >= 1)
	{
		_putchar(((result / pow) % 10) * -1 + '0');
		pow /= 10;
	}
}
