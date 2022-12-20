#include <stdio.h>
#include "main.h"

/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

		i++;
	}

	printf("\n");
}
