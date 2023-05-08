#include "main.h"

/**
 * check_error - checks if there's any problem with from and to files
 * @file_from: file to be opened and read
 * @file_to: file to be openeed and written
 * @argv: array of pointers to arguments
 */
void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * check_error_close - check if there's an error while closing the file
 * @c: integer number that returned from close function
 * @fd: file descriptor
 */
void check_error_close(int c, int fd)
{
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -  copies the content of a file to another file.
 * @argc: argument number
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w, c;
	char buffer[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(file_from, file_to, argv);

	r = read(file_from, buffer, 1024);
	check_error(r, 1, argv);
	while (r > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1 || w != r)
			check_error(-1, 1, argv);

		r = read(file_from, buffer, 1024);
		check_error(r, 1, argv);
	}

	c = close(file_from);
	check_error_close(c, file_from);

	c = close(file_to);
	check_error_close(c, file_to);

	return (0);
}
