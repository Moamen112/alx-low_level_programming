#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to head of linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
