#include "main.h"

/**
 * _isalpha - Check if the c alphabet or not
 * @c: the character to test
 * Return: 1 if alphabet, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
