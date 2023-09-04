#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It reads textfiles printed to STDOUT.
 * @filename: the text file to be read
 * @letters: the number of letters read
 * Return: returns the w- actual number of bytes read and printed
 *        retunrs 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ft;
	ssize_t n;
	ssize_t x;

	ft = open(filename, O_RDONLY);
	if (ft == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(ft, buf, letters);
	n = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(ft);
	return (n);
} 
