#include "main.h"

/**
 * read_textfile - reads a text file and prints it ot the POSIX stdout
 *
 * @filename: name of the file
 * @letters: number of lettrs it should read and print
 *
 * Return: return 0 on unsuccess, else 1 on success and actual
 * number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr = NULL;
	char *buff = NULL;
	ssize_t o, r, w;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		fclose(fptr);
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);
	return (w);
}
