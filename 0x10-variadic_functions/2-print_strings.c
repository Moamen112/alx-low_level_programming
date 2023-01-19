#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - print a list of strings
  * @separator: characters used to split
  * @n: Number of parameters to pring
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list word;

	va_start(word, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(word, char *);
		(c) ? printf("%s", c) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(word);
}
