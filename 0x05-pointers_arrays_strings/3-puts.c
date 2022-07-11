#include "main.h"
#include <stdio.h>
/**
 * _puts - prints out a string followed by new line
 * @str: the pointer on string
 *
 * Return: nothing at all.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str++);
	}
	printf("\n");
}
