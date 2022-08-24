#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - creates a buffer
 * @buf: the file
 *
 * Return: a pointer the created buffer
 */
char *create_buffer(char *buf)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", buf);
		exit(99);
	}
	return (buffer);
}

/**
 * close_buf - close the file
 * @fd: file descriptor of the closed file
 */
void close_buf(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close to %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 * @argc: count of arguments
 * @argv: pointer ti the first char of argv
 *
 * Return: Always 0 for success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = create_buffer(argv[2]);
	rd = read(file_from, buffer, 1024);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(file_to, buffer, rd);

		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		file_from = open(argv[2], O_WRONLY, O_APPEND);
		rd = read(file_from, buffer, 1024);
	} while (rd > 0);

	free(buffer);
	close_buf(file_from);
	close_buf(file_to);

	return (0);
}
