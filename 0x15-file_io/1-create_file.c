#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: returns 1 on success, else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	ssize_t o, w;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		{
			count++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
