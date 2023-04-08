#include "my_hash_tables.h"

/**
 * get_key_index - Calculates the index where a key/value
 *      pair should be stored in a hash table's array.
 * @key: The key for which to calculate the index.
 * @table_size: The size of the hash table's array.
 *
 * Return: The index at which the key/value pair should be stored.
 * Description: This function uses the djb2 hashing algorithm.
 */
unsigned long int get_key_index(const unsigned char *key, unsigned long int size)
{
	return (djb2_hash(key) % size);
}

