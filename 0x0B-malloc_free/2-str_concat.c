#include "main.h"
#include <stdlib.h>

/**
 * str_concat - contatinate two strings
 * @s1: the first string pointer var
 * @s2: the second string pointer var
 *
 * Return: a pointer of memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, k, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	str = malloc(len1 + len2 + 1);
	if (str == NULL)
		return (str);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (k = 0; k < len2 + len1; i++, k++)
		str[i] = s2[k];
	str[i] = '\0';
	return (str);
}
