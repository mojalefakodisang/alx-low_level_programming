#include "main.h"

/**
 * append_text_to_file - append text into file
 *
 * @filename: name of the file
 * @text_content: text content
 *
 * Return: returns 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = write(o, text_content, strlen(text_content));
	}

	close(o);
	if (length == -1)
	{
		return (-1);
	}

	return (1);
}
