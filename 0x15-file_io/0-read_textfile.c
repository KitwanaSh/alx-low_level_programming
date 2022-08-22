#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read the text file
 * and prints if to the POSIS standard output
 * @filename: pointer to the filename char
 * @letters: the number of ltters if should read
 * 
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	buf = malloc(sizeof(char) *letters);

	if (filename == NULL)
		return (0);

	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (rd == -1 || wr == -1 || op == -1 || rd != wr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);

	return (wr);
}
