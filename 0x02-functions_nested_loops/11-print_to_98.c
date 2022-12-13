#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 *@c: number to start with
 * Return: Nothing
 */

void print_to_98(int c)
{
	if (c > 98)
	{
		for (c = c; c > 98; c--)
		{
			printf("%d, ", c);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (c = c; c < 98; c++)
		{
			printf("%d, ", c);
		}
		printf("%d\n", 98);
	}
}
