#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints any argument passed into it
  * @format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str, *seperator;
	va_list ap;

	seperator = "";
	i = 0;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'c')
			{
				printf("%s%c", seperator, va_arg(ap, int));
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", seperator, va_arg(ap, int));
			}
			else if (format[i] == 's')
			{
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", seperator, str);
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", seperator, va_arg(ap, double));
			}
			else
			{
				i++;
				continue;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
