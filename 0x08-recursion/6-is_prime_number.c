#include <stdio.h>

/**
  * is_prime - checks recursively the input from is_prime_number
  * @n: iterator
  * @base: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (is_prime(n + 1, base));
	return (1);
}

/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number(int n)
{
	return (is_prime(2, n));
}
