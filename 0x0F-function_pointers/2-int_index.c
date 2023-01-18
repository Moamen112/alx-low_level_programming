#include "function_pointers.h"

/**
*int_index - searches for a number
*@array: Array of numbers
*@size: array size
*@cmp: Comparing function
*
*Return: returns -1 if the target not found
*return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
