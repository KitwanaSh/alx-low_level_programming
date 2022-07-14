#include "main.h"

/**
*leet - encodes a string into 1337
*@n: input the pointer of string
*Return: the string pointer giving the result
*in 1337 mode
*/
char *leet(char *n)
{
	int count = 0, i;

	int low_c[] = {97, 101, 111, 116, 108};

	int upp_c[] = {65, 69, 79, 84, 76};

	int numbers[] = {52, 51, 48, 55, 49};

	while (*(n + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(n + count) == low_c[i] || *(n + count) == upp_c[i])
			{
				*(n + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (n);
}
