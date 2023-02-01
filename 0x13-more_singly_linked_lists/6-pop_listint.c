#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list and returns the head node’s data (n)
 * @head: double pointer to the head node of the linked list
 *
 * Return: head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
