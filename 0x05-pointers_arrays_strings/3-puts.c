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
	char ptr[44] = "";
	int i;

	str = ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("&ptr[%d] = %p\n",i,str+i);
	}
}
