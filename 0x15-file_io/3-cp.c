#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - it allocates 1024 bytes for a buffer.
 * @file: the file the buffer is storing chars for.
 * Return: returns a pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - it closes file descriptors.
 * @ft: descriptor file to be closed.
 */

void close_file(int ft)
{
	int n;

	n = close(ft);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", ft);
		exit(100);
	}
}

/**
 * main - it copies the file contents to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: returns 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist/cannot be read - exit code 98.
 * If file_to cannot be created/written to - exit code 99.
 * If file_to/file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, x, s;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		s = write(to, buffer, x);
		if (to == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}