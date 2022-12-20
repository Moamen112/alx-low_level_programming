#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: the first variable
 * @b: the second variable
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
