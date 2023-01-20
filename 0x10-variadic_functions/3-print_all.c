#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints any argument passed into it
  * @format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 0;
	char *s;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					flag = 1;
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					flag = 1;
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					flag = 1;
					break;
				case 's':
					s = va_arg(ap, char *);
					printf("%s", s ? s : "(nil)");
					flag = 1;
					break;
				default:
					break;
			}
			if (flag && format[i + 1])
			{
				printf(", ");
				flag = 0;
			}
			i++;
		}
	}
		va_end(ap);
		printf("\n");
}
