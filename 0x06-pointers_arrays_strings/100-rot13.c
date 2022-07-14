#include "main.h"

/**
*rot13 - encodes a string using rot13 style
*@n: input pointer of string n
*
*Return: the pointer to string in rot13 mode
*/

char *rot13(char *n)
{
	int count = 0, i;

	char cters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(n + count) == cters[i])
			{
				*(n + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (n);
}
