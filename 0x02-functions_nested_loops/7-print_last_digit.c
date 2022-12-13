#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: the number that the last digit will be extracted from
 * Return: Last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar((n % 10) + '0');
	return (n % 10);
}
