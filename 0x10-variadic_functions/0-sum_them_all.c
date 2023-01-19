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
	unsigned int i, res = 0;
	va_list ap;

	if (n == 0)
		return (0);

	if (n == 0)
		return (0);

	for (i = res; i < n; i++)
		res += va_arg(ap, int);

	va_end(ap);
	return (res);
}
