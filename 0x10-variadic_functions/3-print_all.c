#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * p_char - prints characters
  * @c: character to print
  * @flag: the flag
  */

void p_char(int *flag, va_list c)
{
	printf("%c", va_arg(c, int));
	*flag = 1;
}

/**
  * p_int - prints integers
  * @i: integer to print
  * @flag: the flag
  */
void p_int(int *flag, va_list i)
{
	printf("%d", va_arg(i, int));
	*flag = 1;
}

/**
  * p_float - prints floats
  * @f: float to print
  * @flag: the flag
  */
void p_float(int *flag, va_list f)
{
	printf("%f", va_arg(f, double));
	*flag = 1;
}

/**
  * p_string - prints strings
  * @s: string to print
  * @flag: the flag
  */

void p_string(int *flag, va_list s)
{
	char *str;

	str = va_arg(s, char *);
	printf("%s", str ? str : "(nil)");
	*flag = 1;
}


/**
  * print_all - prints any argument passed into it
  * @format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 0;
	va_list ap;
	int *ptr = &flag;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					p_char(ptr, ap);
					break;
				case 'i':
					p_int(ptr, ap);
					break;
				case 'f':
					p_float(ptr, ap);
					break;
				case 's':
					p_string(ptr, ap);
					break;
				default:
					break;
			}
			if (flag && format[i + 1])
			{
				printf(", ");
				*ptr = 0;
			}
			i++;
		}
	}
		va_end(ap);
		printf("\n");
}
