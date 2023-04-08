#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm
 * to calculate a hash value for a string
 * @str: The string to hash.
 *
 * Return: The calculated hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value = 5381;
	int current_char;

	while ((current_char = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + current_char;
	}

	return (hash_value);
}

