#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename: the pointer to the filename.
 * @text_content: string added to the end of the file.
 * Return: returns -1 if function fails/filename is NULL and
 *         If file does not exist, user lacks write permissions
 *         Otherwise 1 if succesfull.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	n = write(p, text_content, len);

	if (p == -1 || n == -1)
		return (-1);

	close(p);

	return (1);
}