#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatinate two strings
 * @s1: the first string
 * @s2: The second string
 * @n: The first n bytes of s1
 *
 * Return: Null for faillure, ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			str[i] = *s1;
			s1++;
		}
		else
		{
			str[i] = *s2;
			s2++;
		}
	}
	str[i] = '\0';
	return (str);
}
