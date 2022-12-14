#include <stdio.h>

/**
 * main - print the sum of even numbers in fibonacci
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long i, num1, num2, next, sum = 0;

	num1 = 0;
	num2 = 1;

	while (!(next == 4000000))
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;

		if (next % 2 == 0 && next < 4000000)
		{
			sum += next;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
