#include "main.h"
/**
 * print_number - prints a number
 * @n: The number
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int temp, num, pow, exp;

	exp = pow = 1;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = - num;
	}

	temp = num;

	while (temp >= 10)
	{
		pow++;
		temp /= 10;
	}

	while (--pow)
		exp *= 10;

	while (exp > 1)
	{
		_putchar((num / exp) % 10 + '0');
		exp /= 10;
	}
		_putchar(num % 10 + '0');
}
