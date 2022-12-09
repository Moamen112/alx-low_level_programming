#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Check the last digit
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater than 5");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0");
	}
	else
	{
		printf("and is 0");
	}

	return (0);
}
