#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array
 * @size: which diagonal to add
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = y = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		x += a[i];
	}

	for (i = size - 1; i < (size * size - 1); i += size - 1)
		y += a[i];
	printf("%d, %d\n", x, y);
}
