#include "main.h"
#include <stdio.h>

/**
*print_buffer - prints a buffer
*@b: the pointer of character as a buffur
*@size: the size of a buffer.
*
*Return: nothing as it is a void definition
*/
void print_buffer(char *b, int size)
{
	int a, z, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (z = a; z < a + 10; z++)
			{
				if (z % 2 == 0)
					printf(" ");
				if (z < size)
					printf("%.2x", *(b + z));
				else
					printf("  ");
			}
			printf(" ");
			for (c = a; c < a + 10; c++)
			{
				if (c >= size)
					break;
				if (*(b + c) < 32 || *(b + c) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + c));
			}
			printf("\n");
		}
	}
}
