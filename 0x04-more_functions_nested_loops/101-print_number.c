#include "main.h"
/**
 * print_number - prints a number
 * @n: The number
 * Return: Nothing
 */

void print_number(int n)
{
	int temp, num, pow, exp;

	num = n;
	exp = pow = 1;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	temp = num;

	while (temp >= 10)
	{
		temp /= 10;
		pow++;
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
