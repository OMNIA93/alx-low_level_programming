#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (filename != NULL && text_content == NULL)
		return (1);

	op = open(filename, O_APPEND | O_WRONLY);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	wr = write(op, text_content, len);
	if (wr == -1 || wr != len)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
