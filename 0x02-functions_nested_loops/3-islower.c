#include "main.h"

/**
 * _islower - Checks if the alphabet is lower
 *
 * Return: 1 if lower and 0 if upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
