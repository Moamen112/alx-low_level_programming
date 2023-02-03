#include "main.h"
#include <unistd.h>

/**
 * get_bit - Get the value of the bit at the index
 * @n: The number to check
 * @index: The index to check (starts from 0)
 *
 * Return: The value of the bit (1 or 0), or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & (1 << index)) ? (1) : (0));
}
