#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: the string to print
 * Return: Nothing
 */

unsigned int i = 0;

void _puts_recursion(char *s)
{

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	_puts_recursion(i++);
}
