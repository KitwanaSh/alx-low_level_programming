#include "main.h"

/**
 * _strcat - mix two strings together
 * @dest: represents the first string
 * @src: represents the second string
 *
 * Return: appends the src string to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (0);
}
