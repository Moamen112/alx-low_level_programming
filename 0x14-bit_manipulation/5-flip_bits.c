#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int difference = n ^ m;

	while (difference)
	{
		flip += difference & 1;
		difference >>= 1;
	}

	return (flip);
}
