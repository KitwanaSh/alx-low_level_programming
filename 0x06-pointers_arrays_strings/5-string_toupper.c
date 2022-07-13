#include "main.h"

/**
 * string_toupper - turns all lowercase letter to uppercase
 * @str: the value of a character in a string
 *
 * Description: returning the walue of str
 * Return: Uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
