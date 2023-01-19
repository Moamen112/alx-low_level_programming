#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - sums all arguments
  * @n: first param
  * @...: variable list of arguments
  * Return: sum of all arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		res += va_arg(ap, int);

	va_end(ap);
	return (res);
}
