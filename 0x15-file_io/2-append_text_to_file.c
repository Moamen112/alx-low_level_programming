#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text
 * @text_content: text to append into the file
 *
 * Return: (1) on success and (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int tf, i, j;

	j = 0;

	if (!filename)
		return (-1);

	tf = open(filename, O_WRONLY | O_APPEND);
	if (tf < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(tf, text_content, j);
		if (i != j)
			return (-1);
	}

	close(tf);
	return (1);
}
