#include "main.h"

/**
 * cap_string - Capitalize every word
 * @str: the string to converst in word
 *
 * Return:  the string turned into a capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' ||
		str[i] == '.' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		str[i] == '\t' ||
		str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}

