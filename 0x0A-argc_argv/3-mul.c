#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int x, y;

	x = y = 0;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
