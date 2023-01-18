#include "function_pointers.h"

/**
*array_iterator - call the function for each element in the array
*@array: The array
*@size: size of the array
*@action: function pointer
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		(*action)(*array);
		array++;
	}
}
