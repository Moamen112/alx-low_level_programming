#include <stdio.h>

/**
 * main - prints digits in base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("\d", digit);
		digit++;
	}

	printf("\n");
	return (0);
}
