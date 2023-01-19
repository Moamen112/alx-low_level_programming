#ifndef VARIADIC_FUN_H
#define VARIADIC_FUN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct valid
{
	char *ptr;
	void (*ptr)(va_list arg);
} valid_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
