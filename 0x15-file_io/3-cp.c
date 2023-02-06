#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: Arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int tf_r, tf_w, i, j, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	tf_r = open(argv[1], O_RDONLY);
	if (tf_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	tf_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(tf_r, buf, BUFSIZ)) > 0)
	{
		if (tf_w < 0 || write(tf_w, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(tf_r);
			exit(99);
		}
	}

	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(tf_r);
	n = close(tf_w);

	if (j < 0 || n < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tf_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tf_w);
		exit(100);
	}
	return (0);
}
