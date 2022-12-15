#include "main.h"
/**
 * print_number - prints a number
 * @n: The number
 * Return: Nothing
 */

void print_number(int n)
{
	int temp, pow, exp;

	exp = pow = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	temp = n;

	while (temp >= 10)
	{
		temp /= 10;
		pow++;
	}

	while (--pow)
		exp *= 10;

	while (exp > 1)
	{
		_putchar((n / exp) % 10 + '0');
		exp /= 10;
	}
	_putchar(n % 10 + '0');
}
