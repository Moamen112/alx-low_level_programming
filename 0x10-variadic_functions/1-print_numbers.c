#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers
  * @separator: character to use to split
  * @n: number of elements to print
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
