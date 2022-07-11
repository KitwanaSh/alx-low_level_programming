#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print in reverse order
 * @s: the pointer in string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	char *r_ptr = s;

	while (*(r_ptr + 1) != '\0')
		r_ptr++;

	while (r_ptr > s)
	{
		char tmp = *r_ptr++;
		*r_ptr-- = *s;
		*s++ = tmp;
	}
}
