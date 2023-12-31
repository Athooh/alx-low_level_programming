#include "main.h"

/**
 * create_file - It creates a file.
 * @filename: the pointer of the name of the file to create.
 * @text_content: the pointer to a string to write to the file.
 * Return: returns -1 If the function fails, 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int ft, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ft = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(ft, text_content, len);

	if (ft == -1 || n == -1)
		return (-1);

	close(ft);

	return (1);
}

