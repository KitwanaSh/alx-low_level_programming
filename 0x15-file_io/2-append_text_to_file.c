#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: pointer to the filename
 * @text_content: pointer to the char
 *
 * Return: 1 on success, 1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cr, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cr = open(filename, O_WRONLY | O_APPEND);
	wr = write(cr, text_content, len);

	if (cr == -1 || wr == -1)
		return (-1);

	close(cr);

	return (1);
}
