#include <stdlib.h>
/**
 * malloc_checked - Allocate memory
 * @b: Allocated size
 * Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
