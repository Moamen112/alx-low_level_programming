#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random password
 *
 * Return: the generated password
 */

int main(void)
{
	char random;
	int pass;

	srand(time(0));
	while (pass <= 2645)
	{
		random = rand() % 128;
		pass += random;
		putchar(random);
	}
	putchar(2772 - pass);
	return (0);
}
