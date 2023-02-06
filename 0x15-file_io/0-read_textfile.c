#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int tf, res, rs;
	char *buffer;

	if (!filename)
		return (0);

	tf = open(filename, O_RDONLY);
	if (tf < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	res = read(tf, buffer, letters);
	if (res < 0)
	{
		free(buffer);
		return (0);	
	}

	buffer[res] = '\0';
	close(tf);
	rs = write(STDOUT_FILENO, buffer, res);
	if (rs < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (rs);
}
