#include <stdio.h>

/**
 * main - print the first 50 fibonacci
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long i, num1, num2, next;

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 50; i++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		printf("%lu", next);
		if (i == 49)
			printf('\n');
		else
			printf(", ");
	}
	return (0);
}
