#include "main.h"

/**
 * factorial - returns the factorial of the number
 * @n: the number of numbers to get factorial
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
