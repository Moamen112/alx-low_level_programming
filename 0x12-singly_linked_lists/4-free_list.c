#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 *
 * This function takes in the head of a list_t list as a parameter. 
 * It uses a temporary pointer to iterate through the list, freeing the memory 
 * allocated for each node's str and the node itself, before moving on to the next node. 
 * Once all the nodes have been freed, the list is completely deallocated and the memory is returned to the system.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
