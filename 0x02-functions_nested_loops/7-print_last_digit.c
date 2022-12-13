#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: the number that the last digit will be extracted from
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;
	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
