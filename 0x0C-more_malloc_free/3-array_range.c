#include <stdlib.h>

/**
 * array_range - creates an array of integers containing all the values
 * from min (included) to max (included), ordered from min to max
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array, or NULL if min > max or
 * malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
