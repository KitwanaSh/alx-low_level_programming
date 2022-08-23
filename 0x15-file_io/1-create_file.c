#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the char
 * @text_content: pointer to the char
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int cr;
	char *buf;

	if (text_content == NULL)
		cr = open(filename, O_CREAT, 2);
	cr = open(filename, O_CREAT, 6);

	buf = malloc(sizeof((char *) text_content));

	if (buf == NULL)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	close(cr);

	if (filename == NULL)
		return (-1);
	if (cr == -1)
		return (-1);
	return (1);
}
