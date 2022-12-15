#include "main.h"

/**
 * _isupper - check if the alphabet is upper
 * @c: the alphabet that will be checked
 * Return: 1 if upper, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
