#include <stdio.h>
/**
 * main - prints out all of the arguments passed to it.
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
