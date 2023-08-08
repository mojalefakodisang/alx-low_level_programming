#include "main.h"

/**
 * check97 - checks if there are a correct number of arguments
 * @argc: number of arguments
 *
 * Return: Void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks if file_from exists and can be read
 *
 * @check: checks if it is true or false
 * @file: file_to name
 * @fd_from: file descriptor for from file
 * @fd_to: file descriptor for to file
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from == -1)
			close(fd_from);
		if (fd_to == -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - checks if file_to is created or can be writen
 *
 * @check: checks if it is true or false
 * @file: file_to name
 * @fd_from: file descriptor for from file
 * @fd_to: file descriptor for to file
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from == -1)
			close(fd_from);
		if (fd_to == -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * check100 - checks if files closed properly
 *
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t len_r, len_w;
	char buffer[1024];
	mode_t file_mode;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);

	file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_mode);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);

	len_r = 1024;
	while (len_r == 1024)
	{
		len_r = read(fd_from, buffer, 1024);
		check98(len_r, argv[1], fd_from, fd_to);
		len_w = write(fd_to, buffer, len_r);
		if (len_r != len_w)
			len_w = -1;
		check99(len_w, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
