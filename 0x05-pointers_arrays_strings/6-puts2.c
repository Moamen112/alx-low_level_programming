#include "main.h"

/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;

	}
	_putchar('\n');
}
