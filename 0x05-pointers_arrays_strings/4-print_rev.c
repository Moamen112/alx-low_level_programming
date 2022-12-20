 #include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the string to be printed 
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
