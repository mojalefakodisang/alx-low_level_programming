#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
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
