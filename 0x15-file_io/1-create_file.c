#include "main.h"

/**
 * create_file -  creates a file.
 * @filename: name of the file to be creatted
 * @text_content: string to be written inside the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	wr = write(op, text_content, len);

	if (wr == -1)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
