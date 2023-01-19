#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = res; i < n; i++)
		res += va_arg(ap, int);

	va_end(ap);
	return (res);
}
