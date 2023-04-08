#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to be deleted.
 *
 * Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current_table = ht;
	hash_node_t *node, *temp_node;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				temp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp_node;
			}
		}
	}

	free(current_table->array);
	free(current_table);
}
