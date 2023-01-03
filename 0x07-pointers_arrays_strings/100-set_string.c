#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 *@s: pointer points to a pointer
 *@to: pointer point to a value
 * Return: Nothing
 */

void set_string(char **s, char *to);
{
	*s = to;
}
