#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: unsigned int representation of the binary number
 *         0 if b is NULL or contains characters other than 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
