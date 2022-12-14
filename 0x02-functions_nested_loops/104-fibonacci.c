#include <stdio.h>

/**
 * main - print the first 98 fibonacci's
 * Return: Nothing
 */

int main(void)
{
	int i;
	unsigned long num1, num2, next, m, n, p, carry;

	i = 0;
	num1 = 0;
	num2 = 1;
	for (i = 1; i <= 91; i++)
	{
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		printf("%lu, ", next);
	}
	m = num1 % 1000;
	num1 /= 1000;
	n = num2 % 1000;
	num2 /= 1000;
	while (i <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (num1 + num2) + carry;
		m = n;
		n = p;
		num1 = num2;
		num2 = next;
		if (p >= 100)
		{
			printf("%lu%lu", k, p);
		}
		else
		{
			printf("%lu0%lu", k, p);
		}
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
