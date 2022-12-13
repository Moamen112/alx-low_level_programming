#include <stdio.h>

/**
 * main - Print the sum of multiple numbers of 3 and 5 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
