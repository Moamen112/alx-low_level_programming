#include "main.h"

/**
 * is_lower - Checks if the alphabet is lower
 *
 *	Return: 1 if lower and 0 if upper
 */

int is_lower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
